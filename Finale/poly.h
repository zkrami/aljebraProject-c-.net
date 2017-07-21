#pragma once
#include "fraction.h"

class poly
{
    public:
    typedef pair < ld , int > pdi;
    vector < pdi > P;
    poly(ld n = 0.0) {P.push_back(make_pair(n, 0));}
    ~poly () {P.clear();}
    poly cnst_poly(ld n) {poly temp(n); return temp;}
    bool isempty() {return !P.size();}
    bool iszero() {return !(fabsl(P[0].first) > error || P[0].second);}
    void shorten() {
        rep(i,P.size())
            repi(j,i+1,P.size())
                if(P[i].second == P[j].second){
                    P[i].first += P[j].first;
                    P.erase(P.begin()+j--);
                }
        rep(i,P.size())
            if(fabsl(P[i].first) <= error)
                P.erase(P.begin()+i--);
        if(isempty())
            P.push_back(make_pair(0.0, 0));
        bool m = true;
        while (m)
            {
                m = false;
                rep(i,P.size()-1)
                    if (P[i].second < P[i+1].second)
                    {swap (P[i],P[i+1]); m = true;}
            }
         }
    void approximation() {
        rep(i,P.size())
            if(P[i].second < 0)
                P.erase(P.begin()+i--);
        shorten();
    }
    void insertion() {
        ld x; int y, n; cin >> n;
        while(n--) {
            cin >> x >> y;
            if(fabsl(x) > error)
                P.push_back(make_pair(x, y));
        }
        shorten();
    }
    template <typename T>
	T value(T x) {
        T res = 0.0;
		T par;
        rep(i,P.size())
		{
			par = P[i].first;
			res += par * powl(x, P[i].second);
		}
        return res;
    }
	template <>  complex<ld>  value (complex<ld> x)
	{
		complex<ld> res = 0.0;
		complex<ld> par;
        rep(i,P.size())
		{
			par = P[i].first;
			res += par * pow(x, P[i].second);
		}
        return res;
	}
    void print() {
        if(iszero()) printf(" +0");
        else rep(i,P.size()) {
            if(P[i].first == 1.0) {
                if(P[i].second == 0)
                    printf(" +1");
                else if(P[i].second == 1)
                    printf(" +X");
                else printf(" +X^%d", P[i].second);
            }
            else if(P[i].first == -1.0) {
                if(P[i].second == 0)
                    printf(" -1");
                else if(P[i].second == 1)
                    printf(" -X");
                else printf(" -X^%d", P[i].second);
            }
            else {
                if(P[i].second == 0)
                    printf(" %+g", (double)P[i].first);
                else if(P[i].second == 1)
                    printf(" %+gX", (double)P[i].first);
                else printf(" %+gX^%d", (double)P[i].first, P[i].second);
            }
        }
    }
    poly operator + (poly temp) {
        poly res = *this;
        res.P.insert(res.P.end(), temp.P.begin(), temp.P.end());
        res.shorten();
        return res;
    }
    void operator += (poly temp) {*this = *this + temp;}
    poly operator + (pdi temp)
    {
        poly res = *this;
        res.P.push_back(temp);
        res.shorten();
        return res;
    }
    void operator += (pdi temp)
    {
        *this = *this + temp;
    }
    poly operator + (ld temp) {
        poly res = *this;
        res.P.push_back(make_pair(temp, 0));
        res.shorten();
        return res;
    }
    void operator += (ld temp) {*this = *this + temp;}
    poly operator - (poly temp) {
        poly res = *this;
        for(int i = 0; i < temp.P.size(); i++)
            res.P.push_back(make_pair(-temp.P[i].first, temp.P[i].second));
        res.shorten();
        return res;
    }
    void operator -= (poly temp) {*this = *this - temp;}
    poly operator - (ld op) {return *this + (-op);}
    void operator -= (ld op) {*this = *this - op;}
    poly operator * (poly temp) {
        poly res;
        for(int i = 0; i < P.size(); i++)
            for(int j = 0; j < temp.P.size(); j++)
                res.P.push_back(make_pair(P[i].first * temp.P[j].first, P[i].second + temp.P[j].second));
        res.shorten();
        return res;
    }
    void operator *= (poly temp) {*this = *this * temp;}
    poly operator * (ld temp) {
        poly res = *this;
        for(int i = 0; i < P.size(); i++)
            res.P[i].first *= temp;
        return res;
    }
    void operator *= (ld temp) {*this = *this * temp;}
    poly operator / (poly divr) {
        poly res_temp, res, div = *this;
        if(div.iszero())
            return res;
        if(divr.iszero()) {
            printf("Cannot divide by 0!\n");
            int q = 0; q /= q;
        }
        int n = 30;
        while(n && !div.iszero()) { //div.P[0].second >= divr.P[0].second
            if(div.P[0].second <= 0)
                n--;
            res_temp.P.clear();
            res_temp.P.push_back(make_pair(div.P[0].first / divr.P[0].first, div.P[0].second - divr.P[0].second));
            res += res_temp;
            div -= res_temp * divr;
            div.shorten();
        }
        res.shorten();
        return res;
    }
    void operator /= (poly temp) {*this = *this / temp;}
    poly operator / (ld temp) {return *this * (1/temp);}
    void operator /= (ld temp) {*this = *this / temp;}
    poly operator ^ (int n) {
        poly res = *this;
        while(n--){
            for(int i = 0; i < res.P.size(); i++){
                res.P[i].first *= (res.P[i].second);
                res.P[i].second--;
            }
            res.shorten();
        }
        return res;
    }
    void operator ^= (int n) {*this = *this ^ n;}
    void operator = (poly temp) {P = temp.P;}
    void operator = (ld temp) {*this = cnst_poly(temp);}
    bool operator == (poly temp) {return (P == temp.P); }
    bool operator != (poly temp) {return (!(P == temp.P));}
    bool operator == (ld temp) {if (temp == 0) return (iszero());}


vector < ld > is_solution(ld res)
{
    vector < ld > solutions;
    poly temp;
    temp.P.push_back(make_pair(1.0, 1));
    temp.P.push_back(make_pair(-res, 0));
    temp.shorten();
    do
    {
        solutions.push_back(res);
        if(fabsl(solutions[solutions.size()-1]) <= error)
            solutions[solutions.size()-1] = 0.0;
        *this /= temp;
        approximation();
    }
    while(fabsl(value(res)) <= error);
    return solutions;
}

vector < ld > newton (ld res)
{
    vector < ld > solutions, sol_temp;
    ld last_res  = res - 1, derive;
    poly pol_temp;
    int n = 30;
    while(1)
    {
        if(!n--) break;
        if( (derive =((*this)^1).value(res)) != 0.0 )
            res -= (value(res) / ((*this)^1).value(res));
        else res += error;
        if(fabsl(value(res)) <= error)
        {
            sol_temp = is_solution(res);
            solutions.insert(solutions.end(), sol_temp.begin(), sol_temp.end());
            break;
        }
        last_res = res;
    }
    return solutions;
}

vector < ld > find_solutions(void)
{
	poly pol = *this;
    vector < pair < ld, ld > > domains_up, domains_down;
    vector < ld > solution, sol_temp;
    ld y, ly;
    poly pol_temp;
    vector < ld > zero_bounds;
    ld high, low = 0.0, bound;
    if(pol.P[pol.P.size()-1].second == 0)
        low = pol.P[pol.P.size()-1].first;
    ld maxx = -1, sum = 0.0, t;
    for(int i = 1; i < pol.P.size(); i++)
    {
        t = fabsl(pol.P[i].first / pol.P[0].first);
        zero_bounds.push_back(t);
        if(t > maxx)
            maxx = t;
        sum += t;
    }
    bound = min(maxx + (ld)1, max(sum, (ld)1));
    bound++;
    // fast search for integer solutions
    for(int i = -bound; i < bound; i++)
        if(fabsl(pol.value(i)) <= error)
        {
            sol_temp = is_solution(i);
            solution.insert(solution.end(), sol_temp.begin(), sol_temp.end());
        }
    //! slow search for float solutions
    for(int k = -bound; k < bound; k++)
        for(ld j = k; j < k+1.0; j += 0.1)
            for(ld x = j, lx = j; x <= (ld)j+0.1; x += 0.001)
            {
                y = pol.value(x);
                if((ly < error && y > -error) || (ly > -error && y < error))
                    if(lx != x)
                    {
                        sol_temp = newton(x);
                        solution.insert(solution.end(), sol_temp.begin(), sol_temp.end());
                    }
                ly = y;
                lx = x;
            }
    return solution;
}

};