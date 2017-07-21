#pragma once
#include "poly.h"
using namespace std;
#define Error throw exception();
const long double errop = 1e-12;
template <class T> class matrix {
  private:
        typedef vector<T> row;
		typedef long long ll;
        typedef struct {int rowsize,columnssize;}f_size;
        vector<row> mymatrix;
    public:
        void mat_correction(void){  //! DELETE THE ZERO COLUMNS
        rep(j,columns())
        {
            bool Iszero = true;
            rep(i,rows())
                if (fabsl(mymatrix[i][j]) > errop)
                {
                    Iszero = false;
                    break;
                }
            if (Iszero)
                        {
                            rep(k,rows())
                            mymatrix[k].erase(mymatrix[k].begin() + j, mymatrix[k].begin()+j+1);
                            j--;
                        }
        }
        correc_mat();
}

    void correc_mat(void)
            {
                rep(i,rows()) rep(j,columns())
                if (fabsl(mymatrix[i][j])<=errop) mymatrix[i][j]=0;
            }

    //! Constructor 1
    matrix (int n = 2,int m = 2,T value = 0)
    {
		if(n<=0 || m<=0 ) { n=1 ; m=1; } 
        mymatrix = vector<row> (n);
        for (int i=0;i<n;i++)
            mymatrix[i] = row (m,value);
    }
    //! DeConstructor
    ~matrix ()
    {
		//mymatrix.clear();
	}
    //! Functions
	vector<string> info (void)
	{
		vector<string> temp;
		if (rows() == columns())
		{
			temp.push_back("Square");
			if (*this == Indentity_mat())
				temp.push_back("Indentity");
			else
			{
				int up,down,diag;
				rep(i,rows())
					rep(j,columns())
				{
					if (i < j && fabsl(mymatrix[i][j]) <= errop)
						up++;
					if (i > j && fabsl(mymatrix[i][j]) <= errop)
						down++;
					if (i == j && fabsl(mymatrix[i][j]) >= errop)
						diag++;
				}
				if (up == down && up == (((rows()-1) * rows())/2) && diag > 0)
					temp.push_back("Diag");
				else if (up == down && up == (((rows()-1) * rows())/2) && diag == 0)
					temp.push_back("Zero");
				else if (up == ((rows()-1) * rows())/2)
					temp.push_back("Upper tringle");
				else if (down == ((rows()-1) * rows())/2)
					temp.push_back("Lower tringle");
				else{		
			bool s1 = true,s2 = true;
			rep(i,rows())
				repi(j,i+1,columns()){
					if (fabsl(mymatrix[i][j]-mymatrix[j][i]) > errop)
						s1 = false;
					if (fabsl(mymatrix[i][j]+mymatrix[j][i]) > errop)
						s2 = false;
					if (!s1 && !s2)
						break;
			}
			if (s1)
				temp.push_back("Symmetric");
			else if (s2)
				temp.push_back("Negativly Symmetric");
			}
			}
			if (fabsl(det()) <= errop)
				temp.push_back("Gay");
			}
		return temp;
	}
    //! SAVE TO FILE
    void savef (string c)
    {
        FILE *myfile = fopen(c.c_str(),"wb");
        f_size mysize;
        mysize.rowsize = rows();
        mysize.columnssize = columns();
        fwrite(&mysize,sizeof(f_size),1,myfile);
        rep(i,rows()) rep(j,columns())
        {
            T temp = mymatrix[i][j];
            fwrite(&temp,sizeof(T),1,myfile);
        }
        fclose(myfile);
    }
	static matrix<T> random_mat (int n)
	{
		srand(clock());
		while (1){
		matrix <T> temp (n,n);
		temp = Indentity_mat(n);
		rep(i,n)
			repi(j,i+1,n)
				temp[i][j] = powl(-1,rand()%2) * (rand()%((3*n+2-(n/5))));
		//int r = (int)(powl(1.6,n-1));
		int cn = n + (int)(powl(1.3,n-1)) +5;
		rep(i,cn)
		{
			int r1 = (rand()%n),r2 = (rand()%n),num = powl(-1,rand()%2) * ((rand()%((3*n+2)-(n/5))/2)+(1));
			while (r2 == r1)
				r2 = (rand()%n);
			rep(j,n)
				temp[r1][j] += (temp[r2][j]*num);
		}
		ld sum = 0; int max = 0;
		if (temp.det() != 1) continue;
		rep(i,n)
		{
			rep(j,n)
				sum+=temp[i][j];
			if ((ll)(fabsl(sum*256)) > (ll)(INT_MAX))
			{
			//cout << "YES" << endl;
			continue;
			}
			sum = 0;
		}
		if (n > 3){
		int count = 0;
		rep(i,n) rep(j,n)
			if (temp[i][j] == 0)
				count ++;
		if (count > ((n*(n-1))/4))
		continue;
		}
		return temp;
		}
	}

	
	T sum_element(void){

		T res = 0;
		rep(i,rows())
			rep(j,columns()) res += mymatrix[i][j] ;

		return res;
	}
    void loadf (string c)
    {
        f_size mysize;
        FILE *myfile = fopen(c.c_str(),"rb");
        fread(&mysize,sizeof(f_size),1,myfile);

        resize(mysize.rowsize,mysize.columnssize);
            rep(i,mysize.rowsize) rep(j,mysize.columnssize)
            {
                T ntemp;
                fread(&ntemp,sizeof(T),1,myfile);
                mymatrix[i][j] = ntemp;
            }
        fclose(myfile);
    }
    //! Resize Matrix
    void resize (int n,int m,T value = 0)
    {
		if( n<=0 || m<=0 ) { 
			n=1;
			m=1;
		}
        mymatrix = vector<row> (n);
        for (int i=0;i<n;i++)
            mymatrix[i] = row (m,value);
    }
    //! ROWS AND COLUMNS NUMBER
    int rows () {return mymatrix.size();}
    int columns () {return mymatrix[0].size();}
    //! ADDING ROWS AND COLIMNS
    void Add_Row (vector<T> temp)
    {

        if (rows() == 0)
        {
            mymatrix.push_back(temp);
            return;
        }
        if (temp.size() != columns())
        {
            cout<<"ERROR ! ADDING ROW TO MATRIX WITH DIFFERENT NUMBER OF COLUMNS"<<endl;
            Error;
        }
        mymatrix.push_back(temp);
    }
    void Add_Row(void)
    {
        vector<T> temp (columns(),0);
        mymatrix.push_back(temp);
    }
    void Add_Column (vector<T> temp)
    {
        if (temp.size() != rows())
        {
            cout<<"ERROR ! ADDING COLUMN TO MATRIX WITH DIFFERENT NUMBER OF ROWS"<<endl;
            Error;
        }
        repd(i,rows())
        mymatrix[i].push_back(temp.back()),temp.pop_back();
    }
    void Add_Column(void)
    {
        vector<T> temp (rows(),0);
        repd(i,rows())
        mymatrix[i].push_back(temp.back()),temp.pop_back();
    }
    //! Identity matrix of same n of mymatrix.
    matrix<T> Indentity_mat (void)
    {
        if (rows() != columns())
        {
            cout<<"ERROR ! ASKED FOR INDENTITY MATRIX FOR NON SQUARE MATRIX."<<endl;
            Error;
        }
        int x=rows();
        matrix result (x,x);
        rep (i,x)
            result(i,i)=1;
        return result;
    }
    static matrix<T> Indentity_mat (int n)
    {
        matrix result (n,n);
        rep (i,n)
            result(i,i)=1;
        return result;
    }
    //! Transit
    matrix<T> transit (void)
    {
        matrix result (columns(),rows());
        rep (i,rows()) rep (j,columns())
        result (j,i) = mymatrix[i][j];
        return result;
    }
    //! Print matrix
    void print_mat (void)
    {
        correc_mat();
        cout<<endl;
        cout<<"The Matrix You Asked For :\n";
        rep(i,rows())
        {
            cout<<endl;
            rep(j,columns())
            {
                cout<<"\t\t";
                cout.setf(ios::left);
                cout.width(6);
                cout<<fixed<<setprecision(0)<<mymatrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    //! Read matrix
    void read_mat (void)
    {
        rep(i,rows()) rep(j,columns())
        {
            string c;
            cin>>c;
            stringstream (c) >>  mymatrix[i][j];
        }
    }
    //! Gauss matrix
    matrix<T> det_reducedform (void)
    {
		int sign = 1;
        matrix result = *this;
        rep(i,rows())
            repi(j,i+1,rows())
                {
                bool m = false;
                if (result(i,i) == 0){ m = true;
                repi(s,i,columns())
                    repi(k,i,rows())
                        if (result(k,s)!=0)
                {swap(result(i),result(k)); sign *= -1; m=false; goto out; }
                out:;
                }
                if (m == true)
                    return result;
                if (!result(i,i))
                {
                    T r;
                    repi(s,i+1,columns())
                        if (result(i,s) != 0 )
                        {  r = result(j,s)/result(i,s);  break;     }
                rep(k,columns())
                    result(j,k)-=result(i,k)*r;
                }
                else if (result(i,i) != 0){
                T r = result(j,i)/result(i,i);

                rep(k,columns())
                    result(j,k)-=result(i,k)*r;

                }
                }
        result.correc_mat();
		result[0][0] *= sign;
        return result;
    }
    matrix<T> reducedform (void)
    {
    matrix result = *this;
        rep(i,rows())
            repi(j,i+1,rows())
                {
                bool m = false;
                if (fabsl(result(i,i)) <= errop)
				{ 
			
				m = true;
                repi(s,i,columns())
                    repi(k,i,rows())
                        if (fabsl(result(k,s)) > errop)
                {swap(result(i),result(k)); m=false; goto out;}
                out:;
                }
                if (m == true)
                    return result;
                if (fabsl(result(i,i)) < errop)
                {
                    T r ;
                    repi(s,i+1,columns())
                        if (fabsl(result(i,s)) > errop)
                        {  r = result(j,s)/result(i,s);  break;     }

                rep(k,columns())
                    result(j,k)-=result(i,k)*r;
                }
                else if (fabsl(result(i,i)) > errop){
                T r = result(j,i)/result(i,i);

                rep(k,columns())
                    result(j,k)-=result(i,k)*r;

                }
                }
        result.correc_mat();
		return result;
    }
    matrix<T> jor_reducedform (void)
    {
        matrix result = *this;
        rep(i,rows())
            repi(j,i+1,rows())
                {
                bool m = false;
                if (fabsl(result(i,i)) <= errop){ m = true;
                repi(s,i,columns())
                    repi(k,i,rows())
                        if (fabsl(result(k,s)) > errop)
                {swap(result(i),result(k)); m=false; goto out;}
                out:;
                }
                if (m == true)
                    goto jord;
                if (fabsl(result(i,i)) < errop)
                {
                    T r ;
                    repi(s,i+1,columns())
                        if (fabsl(result(i,s)) > errop)
                        {  r = result(j,s)/result(i,s);  break;     }

                rep(k,columns())
                    result(j,k)-=result(i,k)*r;
                }
                else if (fabsl(result(i,i)) > errop){
                T r = result(j,i)/result(i,i);

                rep(k,columns())
                    result(j,k)-=result(i,k)*r;

                }
                }
            jord:;
                result.correc_mat();
        for (int j=0, i=0;j<columns() && i < rows() ; j++)
            if (fabsl(result(i,j)) > errop)
                {
                    T r = result(i,j);
                    repi(k,j,columns())
                        result(i,k)/=r;
                    i++;
                }
        repdi(i,1,rows())
            {
                rep(j,columns()-1)
                    if (fabsl(result(i,j)) > errop)
                {
            repd(h,i){
                T r = result(h,j);

                rep(k,columns())
                    result(h,k)-=result(i,k)*r;
                    }
                    break;
                }
            }

        result.correc_mat();

        return result;
    }
    //! diag sum
    T diag_sum (void)
    {
        if (rows() != columns())
        {
            cout<<"ERROR ! THERE'S NO DIAG FOR NON SQUARE MATRIX."<<endl;
            Error;
        }
        T sum = 0;
        rep(i,rows())
        sum+=mymatrix[i][i];
        if (fabsl(sum)<=errop) sum=0.0;
        return sum;
    }
    //! diag multiply
    T diag_mult (void)
    {
        if (rows() != columns())
        {
            cout<<"ERROR ! THERE'S NO DIAG FOR NON SQUARE MATRIX."<<endl;
            Error;
        }
        T sum = 1;
        rep(i,rows())
        sum*=mymatrix[i][i];
        if (fabsl(sum)<=errop) sum=0;
        return sum;
    }
    //! MATRIX DET
    T det (void)
    {
        matrix reduced = det_reducedform();
        return (reduced.diag_mult());
    }
	int nullity (void)
	{ retunr (columns()-Rank());}
    //! matrix^-1
    matrix<T> reverse(){

       if(rows()!=columns()){
          cout<<"Error Asked A Reverse To A Non Square Matrix "<<endl;
          Error;
       }
       matrix <T> temp = *this;
       if(!det()){
             cout<<"The Matrix Is Not Reversible"<<endl;
             return temp;
       }
       matrix <T> rev = Indentity_mat() ;
       for(int j=0;j<columns();j++){

          if(!temp(j,j))
             for(int r=j+1;r<rows();r++)
                if(temp(r,j) != 0) {swap(temp(r),temp(j)); swap(rev(r),rev(j)); break;}
          T d=temp(j,j);
        if(d != 0){
          for(int k=0;k<columns();k++)
            {temp(j,k)/=d;  rev(j,k)/=d;}
          for(int i=j+1;i<columns();i++){
            d= -temp(i,j);
            for(int k=0;k<columns();k++)
            {temp(i,k)+=d*temp(j,k);    rev(i,k)+=d*rev(j,k);}
            }
            }
         else break;
       }
       for(int j=columns()-1;j>=0;j--){
             if(!temp(j,j))
             for(int r=j-1;r>=0;r--)
                    if(temp(r,j) != 0) { swap(temp(r),temp(j)); swap(rev(r),rev(j)); break;}
          T d=temp(j,j);
       if(d!= 0){
          for(int k=0;k<columns();k++){
            temp(j,k)/=d;
            rev(j,k)/=d;
          }
          for(int i=j-1;i>=0;i--){
            d= -temp(i,j);
            for(int k=0;k<columns();k++){
                temp(i,k)+=d*temp(j,k);
                rev(i,k)+=d*rev(j,k);
            }
          }
         }
        else break;
       }
       return rev;
    }
    //! RANK(MATRIX)
    int Rank(void)
    {
        matrix<T> result = reducedform();
        int r=0;
        for (int j=0, i=0;j<columns() && i < rows() ; j++)
            if (result(i,j) != 0)
            r++ , i++;
        return r;
    }
    matrix<T> Same(void)
    {
        matrix <T> result = *this;
        matrix <T> P (rows(),columns());
        T c = 1;
        rep(i,P.rows())
            P (i,i) = c++;
        matrix <T> reversed = P.reverse();
        result = reversed * result;
        result *= P;
        result.correc_mat();
        return result;
    }
    //!OPERATORS !!
    //! INDEXING Operator
    vector<T>& operator () (int i){return (mymatrix[i]);}
    vector<T>& operator [] (int i){return (mymatrix[i]);}
    T& operator () (int i,int j){   return (mymatrix[i][j]); }
    //! ASSINE MATRIX TO MATRIX
    void operator = (matrix temp)
        {this->mymatrix = temp.mymatrix;}
    //! Summing Matrices Operators.
    matrix<T> operator + (matrix temp){
    if (rows() != temp.rows() || columns() != temp.columns())
            {
                cout<<"ERROR ! ROWS AND COLUMNS OF 2 SUMMED MATRICES ARE NOT EQUAL"<<endl;
                Error;
            }
        matrix result (rows(),columns());
        rep(i,rows()) rep(j,columns())
        result(i,j) = (*this)(i,j)+temp(i,j);
        return result;
    }
    void operator += (matrix temp)
        {*this = *this + temp;}
    matrix<T> operator - (matrix temp){
    if (rows() != temp.rows() || columns() != temp.columns())
        {
                cout<<"ERROR ! ROWS AND COLUMNS OF 2 SUMMED MATRICES ARE NOT EQUAL"<<endl;
                Error;
        }
        matrix result (rows(),columns());
        rep(i,rows()) rep(j,columns())
        result.mymatrix[i][j] = mymatrix[i][j]-temp(i,j);
        return result;
    }
    void operator -= (matrix temp){
        *this = *this - temp;
    }
    //! MULTIPLAY MATRIX * NUMBER.
    matrix<T> operator * (T temp){
    matrix result (rows(),columns());
    rep(i,rows()) rep(j,columns())
    result(i,j)=mymatrix[i][j]*temp;
    return result;
    }
    void operator *= (T temp){
        *this = *this * temp;
    }
    //! MULTIPLAY MATRIX * MATRIX
    matrix<T> operator * (matrix temp){
        if (temp.rows() != columns()) {
            cout<<"ERROR ! MULTYPLAY OF 2 MATRICES WHERE FIRST ARRAY COLUMNS"<<endl;
            cout<<"IS NOT EQUAL TO SECOND ARRAY ROWS !"<<endl;
            Error;
        }
        matrix result (rows(),temp.columns());
        rep (i,rows()) rep (j,temp.columns())
        rep (k,columns()) result(i,j) += mymatrix[i][k]*temp.mymatrix[k][j];
        return result;
    }
    void operator *= (matrix temp){
        *this = *this * temp;
    }
    vector<T> operator * (vector<T> temp)
    {
        vector < T > c;
    for(int i=0, m=mymatrix.size();i<m;i++)
    {
        float y=0;
        for(int j=0, v=temp.size();j<v;j++)
            y+=(mymatrix[i][j]*temp[j]);
        c.push_back(y);
    }
    return c;
    }
    //! DIVIDING MATRIX/NUMBER
    matrix<T> operator / (T temp){
    matrix<T> result (rows(),columns());
    rep(i,rows()) rep(j,columns())
    result(i,j)=mymatrix[i][j]/temp;
    return result;
    }
    void operator /= (T temp){
        *this = *this / temp;
    }
    //! DIVIDING MATRIX/MATRIX
    matrix<T> operator / (matrix temp){
        return ((*this)*temp.reverse());
    }
    void operator /= (matrix temp){
        *this = *this / temp;
    }
    //! MATRIX POWER (MULTYPLAY MATRIX*ITSELF TEMP TIMES).
    matrix<T> operator ^ (int temp){
    if (temp == 0) return this->Indentity_mat();
    if (temp == 1) return (*this);
    else if (temp < 0) {
            matrix<T> result (rows(),columns());
            result = this->reverse();
            temp = abs(temp);
    if (temp%2)
        return ((result^(temp-1)) * result);
    else{
        matrix <T> temp2 = (result^(temp/2));
        return (temp2 * temp2);
        }
    }

    if (temp%2)
        return (((*this)^(temp-1)) * (*this));
    else{
        matrix<T> temp2 = (*this)^(temp/2);
        return (temp2 * temp2);
    }
    }
    void operator ^= (int temp){
        *this = *this ^ temp;
    }
    bool operator == (matrix temp)
    {   return (mymatrix == temp.mymatrix);   }
    bool operator != (matrix temp)
    {   return (mymatrix != temp.mymatrix);   }
    protected:


};


template <> class matrix<poly> {
  private:
        typedef poly T;
        typedef vector<T> row;
        typedef struct {int strsize,rowsize,columnssize;}f_size;
        vector<row> mymatrix;
    public:
    //! Constructor 1
    matrix (int n = 2,int m = 2)
    {
        T value;
        mymatrix = vector<row> (n);
        for (int i=0;i<n;i++)
            mymatrix[i] = row (m,value);
    }
    //! DeConstructor
    ~matrix ()
    {mymatrix.clear();}
    void mat_pri(void){
    for(int i = 0; i < rows(); i++) {
        for(int j = 0; j < columns(); j++) {
            mymatrix[i][j].print();
            printf("\t");
        }
        cout << endl;
    }
    cout << endl;
    }
    //! Functions
    //! Resize Matrix
    void resize (int n,int m)
    {
        mymatrix = vector<row> (n);
        T value;
        for (int i=0;i<n;i++)
            mymatrix[i] = row (m,value);
    }
    //! ROWS AND COLUMNS NUMBER
    int rows () {return mymatrix.size();}
    int columns () {return mymatrix[0].size();}
    //! ADDING ROWS AND COLIMNS
    void Add_Row (vector<T> temp)
    {
        if (temp.size() != columns())
        {
            cout<<"ERROR ! ADDING ROW TO MATRIX WITH DIFFERENT NUMBER OF COLUMNS"<<endl;
            Error;
        }
        mymatrix.push_back(temp);
    }
    void Add_Row(void)
    {
        vector<T> temp (columns(),0);
        mymatrix.push_back(temp);
    }
    void Add_Column (vector<T> temp)
    {
        if (temp.size() != rows())
        {
            cout<<"ERROR ! ADDING COLUMN TO MATRIX WITH DIFFERENT NUMBER OF ROWS"<<endl;
            Error;
        }
        repd(i,rows())
        mymatrix[i].push_back(temp.back()),temp.pop_back();
    }
    void Add_Column(void)
    {
        vector<T> temp (rows(),0);
        repd(i,rows())
        mymatrix[i].push_back(temp.back()),temp.pop_back();
    }
    matrix <T> det_reducedform () {
    matrix a = *this; int p; bool b;
    for(int j = 0; j < rows(); j++) {
        b = false; p = j;
        for(int i = j; i < rows(); i++) {
            if(!a(i, j).iszero()) {
                if(i != j)
                    for(int k = 0; k < rows(); k++)
                        swap(a(j, k),a(i, k));
                b = true; break;
            }
        }
        if(b != 0)
            for(int i = j+1; i < rows(); i++)
                for(int k = rows()-1; k >= j; k--)
                    a(i, k) -= (a(j, k) * (a(i, j) / a(j, j)));
    }
    return a;
}
//! diag multiply
    T diag_mult (void)
    {
        if (rows() != columns())
        {
            cout<<"ERROR ! THERE'S NO DIAG FOR NON SQUARE MATRIX."<<endl;
            Error;
        }
        T sum = 1;
        rep(i,rows())
        sum*=mymatrix[i][i];
        return sum;
    }
    //! MATRIX DET
    T det (void)
    {
        matrix reduced = det_reducedform();
        T res = reduced.diag_mult();
        res.approximation();
        return (res);
    }
    //!OPERATORS !!
    //! INDEXING Operator
    vector<T>& operator () (int i){return (mymatrix[i]);}
    vector<T>& operator [] (int i){return (mymatrix[i]);}
    T& operator () (int i,int j){   return (mymatrix[i][j]); }
    //! ASSINE MATRIX TO MATRIX
    void operator = (matrix temp)
        {this->mymatrix = temp.mymatrix;}
    //! Summing Matrices Operators.
    matrix<T> operator + (matrix temp){
    if (rows() != temp.rows() || columns() != temp.columns())
            {
                cout<<"ERROR ! ROWS AND COLUMNS OF 2 SUMMED MATRICES ARE NOT EQUAL"<<endl;
                Error;
            }
        matrix result (rows(),columns());
        rep(i,rows()) rep(j,columns())
        result(i,j) = (*this)(i,j)+temp(i,j);
        return result;
    }
    void operator += (matrix temp){
        *this = *this + temp;
    }
    matrix<T> operator - (matrix temp){
    if (rows() != temp.rows() || columns() != temp.columns())
        {
                cout<<"ERROR ! ROWS AND COLUMNS OF 2 SUMMED MATRICES ARE NOT EQUAL"<<endl;
                Error;
        }
        matrix result (rows(),columns());
        rep(i,rows()) rep(j,columns())
        result.mymatrix[i][j] = mymatrix[i][j]-temp(i,j);
        return result;
    }
    void operator -= (matrix temp){
        *this = *this - temp;
    }
    protected:

  
};