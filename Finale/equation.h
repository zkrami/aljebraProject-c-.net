#pragma once
#include "matrix.h"
typedef struct mystruct
{
    bool is_choice;
    int i, j;
    mystruct ()
    {
        is_choice = true;
        i = -1;
        j = -1;

    }
}mystruct;

typedef long double T;

class equations {
private :
    int n,en;
public :
    matrix <T> myeq;
    //! Constructor
    equations (int e_n=0,int x_n=0)
    {
        myeq.resize(e_n,x_n+1);
        en = e_n,n=x_n;
    }
    //! Destructor
    ~equations (void)
    {
		myeq.~matrix();
	}
    //! RESIZE
    void resize (int e_n=1,int x_n=1)
    {
        myeq = matrix<T> (e_n,n+1,0);
        en = e_n,n=x_n;
    }
    //! The Number of Equations
    int num_of_eq (void) {return en;}
    int num_of_var (void) {return n;}
    //! Add equation
    void Add_Equation (vector<T> temp){
        if (en == 0)
            {resize(1,temp.size());
            myeq[0] = temp;}
        else
        myeq.Add_Row(temp);
        }
    //! Add Variable
    void Add_var (vector<T> temp){
        if (n == 0)
        {
            resize(temp.size(),2);
            rep(i,temp.size())
        {
                myeq[i][0]=temp[i];
                myeq[i][1]= 0;
        }
        }
        else{
         rep(i,temp.size())
            myeq[i].insert(myeq[i].begin(),temp[i]);
        }
        }
    void change_const_col (vector<T> temp)
    {
        rep(i,en)
        myeq[i][n] = temp[i];
    }
    void change_const_col (T temp = 0)
    {
        rep(i,en)
        myeq[i][n] = temp;
    }
    //! Read equations
    void read_eq (void){myeq.read_mat();}
    //! N EQUATIONS WITH M (X) OF LEVEL 1 SOLVER
    void print_equations (void)
    {
        rep(i,en)
        {
            rep(j,n)
                {
                    if (myeq(i,j) == 0)
                        printf("         ");
                    else
                    {
                        if (myeq(i,j) == -1 || myeq(i,j) == 1 )
                            printf("%c     X%d ",myeq(i,j) > 0 ? '+' : '-',j+1);
                        else
                        {
                            printf("%c%4.2f X%d ",myeq(i,j) > 0? '+' : '-',fabsf(myeq(i,j)),j+1);
                        }
                    }
                }
                printf(" = %c%4.2f\n\n",myeq(i,n) >= 0 ? ' ' : '-' ,fabsf(myeq(i,n)));
        }
    }
    pair <short, matrix <ld> >  Solve ()
    {
        int rows = myeq.rows() , columns = myeq.columns();
        matrix <ld> sols(columns-1, columns);
            rep(i,columns-1)
            rep(j,columns)
            sols(i, j) = 0.0;
            short is_INF = 0;


        vector<T> x;
        matrix<T> reduced = myeq.jor_reducedform();
        matrix <T> not_H (rows, columns-1);
        rep(i,rows)
        rep(j,columns-1)
        not_H (i, j) = reduced (i,j);

     

        int Rax  = not_H.Rank() ,Rred = reduced.Rank();


        if (Rred != Rax)
            {
                is_INF = -1;
                pair <short, matrix <ld> > result = make_pair(is_INF, sols);
                return result;
            }

        else
        {

            vector< mystruct > A(columns-1);
            for (int j=0, i=0; j < columns-1 && i < rows ; j++)
                if (reduced(i, j) != 0)
                {
                    A[j].is_choice = false;
                    A[j].i = i;
                    A[j].j = j;
                    i++;
                }
            int k = columns-2;

            while (k != -1)
            {
                if(A[k].is_choice)
                    sols[k][k] = 1;
                else {
                    for(int i = A[k].i, j = A[k].j + 1 ; j < columns-1 ; j++) {
                        if(reduced(i, j) != 0)
                            sols[A[k].j][j] = -reduced(i, j);
                    }
                    sols[A[k].j][columns-1] = reduced(A[k].i, columns-1);
                }
                k--;
            }

            if (Rred == columns-1)
                is_INF = 0;  //! ONE SOLUTION

            else
                is_INF = 1;  //! INFINTE SOLUTINS

            pair <short, matrix <ld> > result = make_pair(is_INF, sols);
          result.second.mat_correction();
                return result;
            }

        }
	pair <short, matrix <ld> >  Solve2 ()
    {
        int rows = myeq.rows() , columns = myeq.columns();
        matrix <ld> sols(columns-1, columns);
            rep(i,columns-1)
            rep(j,columns)
            sols(i, j) = 0.0;
            short is_INF = 0;

        vector<T> x;
        matrix<T> reduced = myeq.jor_reducedform();
        matrix <T> not_H (rows, columns-1);
        rep(i,rows)
        rep(j,columns-1)
        not_H (i, j) = reduced (i,j);

        int Rax  = not_H.Rank() ,Rred = reduced.Rank();
        if (Rred != Rax)
            {
                is_INF = -1;
                pair <short, matrix <ld> > result = make_pair(is_INF, sols);
                return result;
            }

        else
        {

            vector< mystruct > A(columns-1);
            for (int j=0, i=0; j < columns-1 && i < rows ; j++)
                if (reduced(i, j) != 0)
                {
                    A[j].is_choice = false;
                    A[j].i = i;
                    A[j].j = j;
                    i++;
                }
            int k = columns-2;

            while (k != -1)
            {
                if(A[k].is_choice)
                    sols[k][k] = 1;
                else {
                    for(int i = A[k].i, j = A[k].j + 1 ; j < columns-1 ; j++) {
                        if(reduced(i, j) != 0)
                            sols[A[k].j][j] = -reduced(i, j);
                    }
                    sols[A[k].j][columns-1] = reduced(A[k].i, columns-1);
                }
                k--;
            }

            if (Rred == columns-1)
                is_INF = 0;  //! ONE SOLUTION

            else
                is_INF = 1;  //! INFINTE SOLUTINS

            pair <short, matrix <ld> > result = make_pair(is_INF, sols);
                return result;
            }
        }

};

