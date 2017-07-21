#pragma once

#include "equation.h"

class vector_space {
	
public:
    matrix<ld> base;
	int T;
    vector_space (matrix<ld> temp = matrix<ld> (0,0)) {
        //if (base.rows() != base.columns())
           // throw exception();

        if (temp == matrix<ld> (0,0)) {
            temp.resize(T,T);
            rep (i,base.rows())
                temp(i,i) = 1;
        }
        base = temp;
		T = base.rows();
	
    }
    ~vector_space (void)
    {}

    //! Functions :
    void change_base (matrix<ld> temp) {
        //if (temp.rows() != temp.columns() || temp.columns() != T)
          //  throw exception ();

        base = temp;
    }
    void reset_base (void)
    {base = base.Indentity_mat();}

    vector<ld> relative_coord (vector<ld> temp ,matrix<ld> u_base = matrix<ld> (0,0)) {
        if (u_base == matrix<ld> (0,0))
            u_base = u_base.Indentity_mat(T);

        matrix < ld > transfer (T,T);
        equations ss (T, T);
        rep(i, T)
            rep(j, T)
                ss.myeq[i][j] = u_base[i][j];

        rep(k, T) {
            rep(i,T)
                ss.myeq[i][T] = base[i][k];
            vector <ld> coord(0,0);
            pair < int, matrix <ld> > solves = ss.Solve();
            ss.myeq.print_mat();

            solves.second.print_mat(); cout << endl;
            if (solves.second == matrix<ld> (0,0)) {
                coord = vector <ld> (T, 0);
            }
            else {
                rep(i,solves.second.rows())
                    coord.push_back(solves.second[i][0]);
            }

            rep(i,T)
                transfer[i][k]= coord[i];
        }

        matrix <ld> temp2 (temp.size(),1);

        rep(i, temp.size())
            temp2[i][0] = temp[i];

        temp2 = transfer * temp2 ;

        rep(i, temp.size())
            temp[i] = temp2[i][0];
        return temp;
    }
    vector <ld> relative_vector (vector <ld> temp, matrix <ld> u_base = matrix<ld> (0,0)) {
        if (u_base == matrix<ld> (0,0))
            u_base = u_base.Indentity_mat(T);
        matrix < ld > transfer (T,T);
        equations ss (T, T);
        rep(i, T)
            rep(j, T)
                ss.myeq[i][j] = base[i][j];

        rep(k, T) {
            rep(i,T)
                ss.myeq[i][T] = u_base[i][k];
            vector <ld> coord(0,0);
            pair < int, matrix <ld> > solves = ss.Solve();
         if (solves.second == matrix<ld> (0,0)) {
                coord = vector <ld> (T, 0);
            }
            else {
                rep(i,solves.second.rows())
                    coord.push_back(solves.second[i][0]);
            }

            rep(i,T)
                transfer[i][k]= coord[i];
        }
        matrix <ld> temp2 (temp.size(),1);
        rep(i, temp.size())
            temp2[i][0] = temp[i];

        temp2 = transfer * temp2 ;

        rep(i, temp.size())
            temp[i] = temp2[i][0];

        return temp;
    }

    bool is_base(matrix < ld > u_base) {
        if(u_base.Rank() == T)
            return true;
        return false;
    }

    static vector_space  find_base (matrix < ld > u_base,int T = 0) {
        u_base = u_base.transit();
        matrix<ld> temp = u_base.reducedform();
       vector <bool> pivot(u_base.columns(),0);
      
        for(int i = 0, j = 0; i < temp.rows() && j < temp.columns(); j++)
            if(fabsl(temp(i, j)) >= errop)
                pivot[j] = true, i++;
        rep(j, u_base.columns())
            if (!pivot[j])
                rep(k, u_base.rows())
                    u_base[k][j] = 0.0;
        rep(j, u_base.columns()) {
            bool b = true;
            rep(k, u_base.rows())
                if(fabsl(u_base[k][j]) >= errop) {
                    b = false;
                    break;
                }
            if (b) {
                rep(k, u_base.rows())
                    u_base[k].erase(u_base[k].begin() + j);
                j--;
            }
        }
        u_base.print_mat();
        vector_space  res(u_base);
        return res;
    }

    //! Operators :
    void operator = (vector_space temp)
    {base = temp.base;}


};
