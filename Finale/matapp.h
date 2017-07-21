#pragma once
#include "vector_space.h"
class matapp {
public:

static vector <ld> Eginvalues (matrix<ld> temp)
{
    matrix <poly> a(temp.rows(),temp.columns());
    rep(i,temp.rows())
    rep(j,temp.columns())
    {
        if (i == j)
        {
            a(i,j).P[0].first = 1.0;
            a(i,j).P[0].second = 1;
            a(i,j).P.push_back(make_pair(-temp(i,j) , 0));
        }
        else
        {
            a(i,j).P[0].first = -temp(i,j);
            a(i,j).P[0].second = 0;
        }
    }
    return ((a.det()).find_solutions());
}
static bool Is_Same(matrix <ld> temp1 , matrix<ld> temp2)
{
    vector <ld> sol1 = Eginvalues(temp1);
    vector <ld> sol2 = Eginvalues(temp2);
    if (sol1.size() != sol2.size())
        return false;
    sort(sol1.begin(),sol1.end());
    sort(sol2.begin(),sol2.end());
    return (sol1 == sol2);
}


static matrix < ld > reducedformeigenvectors (matrix < ld > result)
{
    rep(i, result.rows())
    repi(j,i+1,result.rows())
    {

        if (result(i,i) == 0)
            repi(k,i,result.rows())
            if (result(k,i)!=0)
            {
                swap(result(i),result(k));
                break;
            }
        if (result (i,i) != 0)
        {
            ld r = result(j,i);
            rep(k,result.columns())
            result(j,k)*=result(i,i);
            rep(k,result.columns())
            result(j,k)-=(result(i,k)*r);
        }
    }
    return result;
}

static bool iszero (vector <ld> temp){

     rep(i,temp.size())
    if (temp[i] != 0)
        return false;
    return true;
}


static bool isempty(matrix <ld> temp){

    return (!(temp[0].size()));
}

static vector < pair <ld, matrix <ld > > > find_eginvectors(matrix <ld> temp , vector <ld> egin_values )
{

    int n = temp.rows();
    matrix <ld> res (n, n);
    res = temp;

    sort(egin_values.begin(), egin_values.end());
    vector < pair <ld, matrix <ld > > > egin_vectors (n);
    rep(i, egin_values.size())
    {
            temp = res;
            rep(k, n)
            temp(k,k) -= egin_values[i];
            vector <ld> zeros (n);
            rep(i,n) zeros[i] = 0.0;  //! The zero column
            temp.Add_Column(zeros);
            equations result(n,n);
            result.myeq = temp;


            pair <short int , matrix <ld> > res = result.Solve();

            egin_vectors[i] = make_pair(egin_values[i], res.second);
    }
    return egin_vectors;
}
static pair <matrix <ld>, matrix <ld> > can_diag (matrix <ld> temp, vector<ld> egin)
{
    int w = temp.rows();
    matrix <ld> res (w, w);

    res = temp;
    matrix <ld> temporary (w, w);
    temporary = temp;

    sort(egin.begin(),egin.end());
    bool yes = true;
    int alg , geo;
    rep(k,egin.size())
    {
        res = temp;
        alg = 1, geo = 0;
        rep(i,egin.size())
        {
            if (i != k && egin[i] == egin[k])
                alg++;
        }
        rep(i,w)
        res(i,i) -= egin[k];
        geo = w - res.Rank();

        if (geo != alg)
        {
            yes = false;
            break;
        }
    }
    if (yes)
    {
        int c = 0;
        rep(i,w)
        rep(j,w)
        {
            if (i == j)
                temp(i,j) = egin[c++];
            else
                temp(i,j) = 0.0;
        }
        matrix <ld> Transform (w, w);
        vector < pair <ld, matrix <ld > > > vectors (w);

        vectors = find_eginvectors(temporary, egin);

        c = 0;
        rep(i, w)
        {
            if ( (i-1 >=0 && vectors[i].first != vectors[i-1].first) || (!i))
            rep(k, vectors[i].second.columns())
            {
                vector <ld> mycolumns (w);
                rep(j, vectors[i].second.rows())
                {
                    mycolumns[j] = vectors[i].second[j][k];

                }
                rep(t, w)
                Transform[t][c] = mycolumns[t];
                c++;
            }
        }
        pair <matrix <ld>, matrix <ld> > res = make_pair(Transform, temp);
        return res;
    }
    else
    {
        rep(i,w) rep(j,w) temp(i,j) = 0;
        if (w > 1)
		temp(0,1) = -1;  //! So the matrix cannot have a same diag matrix
        pair <matrix <ld>, matrix <ld> > res = make_pair(temp, temp);
        return res;
    }

} 

	static vector_space spanrows (matrix<ld> temp)
	{
		return (vector_space::find_base(temp));
	}
	static vector_space spancolumns (matrix<ld> temp)
	{
		return (vector_space::find_base(temp.transit()));
	}
	static vector_space nullspace (matrix<ld> temp)
	{
		equations tt (temp.rows(),temp.columns());
		rep(i,temp.rows())
			rep(j,temp.columns())
			tt.myeq[i][j] = temp[i][j];
		rep(i,tt.myeq.rows())
			tt.myeq[i][temp.columns()] = 0;
		
		pair<short,matrix<ld> > mysols = tt.Solve();
		return (spancolumns(mysols.second));
	}
};

