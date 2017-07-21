#pragma once
#include<stdio.h>
#include<iostream>
#include<sstream>
#include<queue>
#include<cmath>
#include<cstdlib>
#include<stack>
#include<cstring>
#include<string>
#include<map>
#include<algorithm>
#include<ctime>
#include<set>
#include<vector>
#include<numeric>
#include<iomanip>
#include <bitset>
#include <fstream>
#include <complex>
#define rel(a) a._Val[0]
#define img(a) a._Val[1]
using namespace std;
#define All(a) a.begin(), a.end()
#define rep(i,n) for(int i=0;i<int(n);i++)
#define repd(i,n) for(int i=n-1;i>=0;i--)
#define repi(i,a,n) for(int i=int(a);i<int(n);i++)
#define repdi(i,a,n) for(int i=n-1;i>=a;i--)
#define error (1e-12)
typedef long double ld;


class fraction
{
    typedef long long ll;
private:
    ll N,D;
public:
     fraction(ll a = 0,ll b = 1){
           N=a;
           D=b;
           if(!D) throw 0;
           shorten();
    }
	fraction(int a,int b = 1){
           N=a;
           D=b;
           if(!D) throw 0;
           shorten();
    }
	fraction (ld a,int b = 1)
	 {
		 a *= 1000;
		 N = (ll)a;
		 D = 1000;
		 shorten();
	 }
    void shorten(){
          ll t= gcd(N,D);
          N/=t;
          D/=t;
    }
	string strnum (void)
	{
		string a;
		stringstream ss;
		ss << N << "/" << D <<" ";
		ss >> a;
		return a;
	}
    void print(){
      cout<<N<<"/"<<D<<" ";
    }
	void same(fraction &a,fraction &b){
       long long t=a.D;
       a.D *= b.D;
       a.N *= b.D;
       b.D *=t;
       b.N *=t;
    }
    //Multi
    void operator ~ (){
       swap(N,D);
    }

    fraction operator * (fraction t){
           fraction res(t.N*N,D*t.D);
            res.shorten();
            return res;
    }
    void operator *= (fraction t){
        *this = *this * t;
    }
    fraction operator * (long long t){
         return  fraction(t,(ll)1) * (*this) ;
    }
    void operator *=(long long t){
            *this = *this * t;
    }
	fraction operator * (int t){
         return  fraction(t,1) * (*this) ;
    }
    void operator *=(int t){
            *this = *this * t;
    }
	fraction operator * (long double t){
         return  fraction(t,1) * (*this) ;
    }
    void operator *=(long double t){
            *this = *this * t;
    }
    //Plus
    fraction operator + (fraction t){
             fraction res( (t.D*N)+(D*t.N) , (t.D*D) );
             res.shorten();
             return res;
    }
    void operator += (fraction t){
          *this = *this + t;
    }
    fraction operator + (ll t){
         return (*this + fraction(t));
    }
    void operator += (ll t){
        *this = (*this + t);
    }
	fraction operator + (ld t){
         return (*this + fraction(t));
    }
    void operator += (ld t){
        *this = (*this + t);
    }
	fraction operator + (int t){
         return (*this + fraction(t));
    }
    void operator += (int t){
        *this = (*this + t);
    }
    //Mines
    fraction operator - (fraction t){
             fraction res = *this + (t*-1) ;
             res.shorten();
             return res;
    }
    void operator -= (fraction t){
          *this = *this - t;
    }
    fraction operator - (ll t){
         return *this - fraction(t,(ll)1);
    }
    void operator -= (ll t){
        *this = *this - t;
    }
    fraction operator - (ld t){
         return *this - fraction(t,1);
    }
    void operator -= (ld t){
        *this = *this - t;
    }
	fraction operator - (int t){
         return *this - fraction(t,1);
    }
    void operator -= (int t){
        *this = *this - t;
    }
	// Div
    fraction operator / (fraction t){
           ~t;
           fraction res = *this * t ;
            res.shorten();
            return res;
    }
    void operator /= (fraction t){
        *this = *this / t;
    }
    fraction operator / (long long t){
         return   (*this) / fraction(t) ;
    }
    void operator /=(long long t){
            *this = *this / t;
    }
    fraction operator / (long double t){
         return   (*this) / fraction(t) ;
    }
    void operator /=(long double t){
            *this = *this / t;
    }
    fraction operator / (int t){
         return   (*this) / fraction(t) ;
    }
    void operator /=(int t){
            *this = *this / t;
    }

	void operator = (fraction temp)
	{
		N = temp.N;
		D = temp.D;
	}
	void operator = (ld temp)
	{
		N = temp*10000;
		D = 10000;
		shorten();
	}
	void operator = (ll temp)
	{
		N = temp;
		D = 1;
	}
	void operator = (int temp)
	{
		N = temp;
		D = 1;
	}
   //Compare
   bool operator == (fraction t){
            shorten();
            t.shorten();
          return (D==t.D && N==t.N );
   }
   bool operator == (int t){
       fraction s (t);     
	   shorten();
       s.shorten();
      return (D==s.D && N==s.N );
   }
   bool operator == (ld t){
       fraction s (t);     
	   shorten();
       s.shorten();
      return (D==s.D && N==s.N );
   }
   bool operator == (ll t){
       fraction s (t);     
	   shorten();
       s.shorten();
      return (D==s.D && N==s.N );
   }
   bool operator == (bool t){
       if (t && *this != 0) return 1;
	   else if (!t && *this == 0) return 1;
	   return 0;
   }
   bool operator != (bool t){
       if (t && *this != 0) return 0;
	   else if (!t && *this == 0) return 0;
	   return 1;
   }
   bool operator != (fraction t){
           return !(*this == t);
   }
   bool operator != (ll t){
       fraction s (t);     
	   shorten();
       s.shorten();
      return (D!=s.D || N!=s.N );
   }
   bool operator != (ld t){
       fraction s (t);     
	   shorten();
       s.shorten();
      return (D!=s.D || N!=s.N );
   }
   bool operator != (int t){
       fraction s (t);     
	   shorten();
       s.shorten();
      return (D!=s.D || N!=s.N );
   }

   bool operator > (fraction t){
         fraction t2= *this ;
         same(t2,t);
         return (t2.N > t.N);
   }
   bool operator > (int s){
         fraction t2= *this ;
		 fraction t (s);
         same(t2,t);
         return (t2.N > t.N);
   }
   bool operator > (ll s){
         fraction t2= *this ;
		 fraction t (s);
         same(t2,t);
         return (t2.N > t.N);
   }
   bool operator > (ld s){
         fraction t2= *this ;
		 fraction t (s);
         same(t2,t);
         return (t2.N > t.N);
   }

   bool operator >= (fraction t){
         return ( (*this>t) || ((*this)==t )) ;
   }
   bool operator >= (int t){
         return ( (*this>t) || ((*this)==t )) ;
   }
   bool operator >= (ll t){
         return ( (*this>t) || ((*this)==t )) ;
   }
   bool operator >= (ld t){
         return ( (*this>t) || ((*this)==t )) ;
   }

   bool operator < (fraction t){
         fraction t2= *this ;
         same(t2,t);
         return (t2.N < t.N);
   }
   bool operator < (int s){
         fraction t2= *this ;
		 fraction t (s);
         same(t2,t);
         return (t2.N < t.N);
   }
   bool operator < (ll s){
         fraction t2= *this ;
		 fraction t (s);
         same(t2,t);
         return (t2.N < t.N);
   }
   bool operator < (ld s){
         fraction t2= *this ;
		 fraction t (s);
         same(t2,t);
         return (t2.N < t.N);
   }

   bool operator <= (fraction t){
         return ( (*this<t) || ((*this)==t )) ;
   }
   bool operator <= (int t){
         return ( (*this<t) || ((*this)==t )) ;
   }
   bool operator <= (ld t){
         return ( (*this<t) || ((*this)==t )) ;
   }
   bool operator <= (ll t){
         return ( (*this<t) || ((*this)==t )) ;
   }
   fraction operator - (void)
   {
	   fraction temp = *this;
	   temp.D = -1 * temp.D;
	   return temp;
   }
   fraction operator ^ (ll temp)
   {
	   if (temp == 0) return (fraction((ll)1));
	   if (temp == 1) return (temp);
	   if (temp == 2) return (temp*temp);

	   if (temp < 0)
	   {
		   fraction tt = (*this);
		   ~tt;
		   return (tt ^ temp);
	   }

	   if (temp&1)
		   return ( ((*this) ^ (temp-1)) * (*this));
	   
	   fraction tt = (*this) ^ (temp/2);
	   return (tt*tt);
   }
   long long  gcd(long long a,long long b){
            long long t;
    while(b){
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
	bool operator ! (void)
	{
		return (!D);
	}
    
protected:
    private:

};