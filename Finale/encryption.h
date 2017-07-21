#pragma once
#include "matrix.h"
using namespace std;

class encryp
{
private :
    string f_name;
public :
    encryp (void)
    {
        f_name.clear();
    }
    ~encryp (void)
    {
    }
    void name_text (string name)
    {
        f_name = name;
    }
    pair<ld,string> encrp(matrix< int > &enc_mat)
    {
		int t1=clock();
		int rr;
		for( rr=f_name.length() ; rr>=0 ; rr--){
            if(f_name[rr] == '.' ) break; 
		}
		 FILE *p = fopen(f_name.c_str(), "rb");
	f_name = f_name.substr(0,rr);
    string df_name = f_name + ".enc ";
    FILE *ecry = fopen(df_name.c_str(), "wb");
   
    int n = enc_mat.rows();
    int r;
    char c;
    while(1)
    {
        vector <int> b;
        for(int i=0;i<n;i++)
    {
        if (fread(&c,sizeof(char),1,p))
        {
        r = (int) c;
        b.push_back(r);
        }
        else if (i != 0)
            b.push_back(0);
        else
        {
            goto out;
        }
    }
    vector <int> q = enc_mat * b;
    rep(i,q.size()) {
        cout<<q[i]<<endl;
        fwrite(&q[i],sizeof(int),1,ecry);
    }
    }
    out:;
    fclose(ecry);
    fclose(p);
	int t2=clock();
	ld tt = ((ld)(t2-t1))/1000.0 ; 
	return make_pair(tt,df_name);
    }
pair<ld,string> decryp(matrix <int> &enc_mat ) {
	int t1=clock();
	matrix<ld> encss (enc_mat.rows(),enc_mat.columns());
	rep(i,enc_mat.rows())
		rep(j,enc_mat.columns())
			encss[i][j] = enc_mat[i][j];
       matrix<long double> decryps= encss.reverse();
	   matrix<int> decryp_mat (enc_mat.rows(),enc_mat.columns());
		rep(i,enc_mat.rows())
		rep(j,enc_mat.columns())
			decryp_mat[i][j] = (decryps[i][j] + 0.001);
    
	   
	   string  dd_name = f_name;
       FILE *p=fopen(dd_name.c_str(), "rb");
	   int rr;
		for( rr=f_name.length() ; rr>=0 ; rr--){
            if(f_name[rr] == '.' ) break; 
		}
		f_name = f_name.substr(0,rr);
	   string dec_f_name = f_name + ".txt";
       FILE *f=fopen(dec_f_name.c_str(), "wb");
       int r;
       while(1)
       {
           vector <int> b;
           for(int i=0;i<decryp_mat.rows();i++)
           {
            if (fread(&r, sizeof(r), 1,p ))
               b.push_back(r);
            else if (i != 0)
               b.push_back(0);
            else
                goto out;
           }
           vector <int> origin_mat =decryp_mat * b;
           rep(i,decryp_mat.rows()) {

               int s=origin_mat[i];

               char c=(char ) (origin_mat[i]+0.00001);
               fwrite (&c,sizeof(char),1,f);
           }
       }
       out:;
       fclose(f);
       fclose(p);
	   int t2=clock();
	   ld tt = ((ld)(t2-t1))/1000.0 ;
	   return make_pair(tt,dec_f_name);
    }
};

