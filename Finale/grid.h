#pragma once
#include "matapp.h"
#define BIG_WIDTH 90 ;
#define SMALL_WIDTH 60 ;
#define BIG_HEIGT 60;
#define SMALL_HEIGT 40
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MetroFramework::Forms;
using namespace  MetroFramework::Controls;
using namespace  MetroFramework::Animation;
using namespace  MetroFramework::Components;
using namespace  MetroFramework::Drawing;
using namespace  MetroFramework::Fonts;
using namespace  MetroFramework::Interfaces;
using namespace  MetroFramework::Native;
using namespace MetroFramework;

class grid
{
public:
	static void get_datagrid_from_matrixt( matrix<double long> t, MetroGrid^ MetroGridt){
				while (MetroGridt->Rows->Count) MetroGridt->Rows->Clear();
			    while (MetroGridt->Columns->Count) MetroGridt->Columns->Clear();
				 for(int j=0;j<t.columns();j++) {
					 MetroGridt->Columns->Add("R",Convert::ToString(j));
					 MetroGridt->Columns[j]->Width = BIG_WIDTH ;
				 }
				 for(int i=0;i<t.rows();i++) {
					 MetroGridt->Rows->Add();
					 MetroGridt->Rows[i]->Height = BIG_HEIGT ;
				 }
				 for(int i=0;i<t.rows();i++)
					for(int j=0;j <t.columns();j++)	MetroGridt->Rows[i]->Cells[j]->Value  =  Convert::ToString( (Double) t(i,j) );
 }

 static void get_datagrid_from_matrixt( matrix<int> t, MetroGrid^ MetroGridt){
				while (MetroGridt->Rows->Count) MetroGridt->Rows->Clear();
			    while (MetroGridt->Columns->Count) MetroGridt->Columns->Clear();
				 for(int j=0;j<t.columns();j++) {
					 MetroGridt->Columns->Add("R",Convert::ToString(j));
					 MetroGridt->Columns[j]->Width = BIG_WIDTH ;
				 }
				 for(int i=0;i<t.rows();i++) {
					 MetroGridt->Rows->Add();
					 MetroGridt->Rows[i]->Height = BIG_HEIGT ;
				 }
				 for(int i=0;i<t.rows();i++)
					for(int j=0;j <t.columns();j++)	MetroGridt->Rows[i]->Cells[j]->Value  =  Convert::ToString( (int) t(i,j) );
 }
static void get_datagrid_from_matrixt2( matrix<double long> t, MetroGrid^ MetroGridt){
				while (MetroGridt->Rows->Count) MetroGridt->Rows->Clear();
			    while (MetroGridt->Columns->Count) MetroGridt->Columns->Clear();
				 for(int j=0;j<t.columns();j++) {
					 MetroGridt->Columns->Add("R",Convert::ToString(j));
					 MetroGridt->Columns[j]->Width = SMALL_WIDTH ;
				 }
				 for(int i=0;i<t.rows();i++) {
					 MetroGridt->Rows->Add();
					 MetroGridt->Rows[i]->Height = SMALL_HEIGT ;
				 }
				 for(int i=0;i<t.rows();i++)
					for(int j=0;j <t.columns();j++)	MetroGridt->Rows[i]->Cells[j]->Value  =  Convert::ToString( (Double) t(i,j) );
 }

static void get_datagrid_from_matrixt2( matrix<int> t, MetroGrid^ MetroGridt){
				while (MetroGridt->Rows->Count) MetroGridt->Rows->Clear();
			    while (MetroGridt->Columns->Count) MetroGridt->Columns->Clear();
				 for(int j=0;j<t.columns();j++) {
					 MetroGridt->Columns->Add("R",Convert::ToString(j));
					 MetroGridt->Columns[j]->Width = SMALL_WIDTH ;
				 }
				 for(int i=0;i<t.rows();i++) {
					 MetroGridt->Rows->Add();
					 MetroGridt->Rows[i]->Height = SMALL_HEIGT ;
				 }
				 for(int i=0;i<t.rows();i++)
					for(int j=0;j <t.columns();j++)	MetroGridt->Rows[i]->Cells[j]->Value  =  Convert::ToString( (Int32) t(i,j) );
 }

static void Change_grid(int n , int m ,MetroGrid ^Dt){
	int width = BIG_WIDTH ;
	int height = BIG_HEIGT ;
	try{
	 width = Dt->Columns[0]->Width ;
	 height = Dt->Rows[0]->Height ;
	}
	catch(...) {  }
				matrix<long double> t(n,m,0) ;
				try{ t= get_matrix_from_formt(Dt); }
				catch(...){}
				Dt->Columns->Clear();
				Dt->Rows->Clear();
				for(int i=0;i<m;i++) {
					Dt->Columns->Add("R",Convert::ToString(i));
					Dt->Columns[i]->Width = width ;

				}
				for(int i=0;i<n;i++) {

					Dt->Rows->Add();
					Dt->Rows[i]->Height = height ;
				}
			for(int i=0;i<n;i++)
					for(int j=0;j<m;j++) Dt->Rows[i]->Cells[j]->Value = "0";

				int min_rows = min(n,t.rows());
				int min_column = min(m,t.columns());

				for(int i=0;i<min_rows;i++)
					for(int j=0;j<min_column;j++)
						Dt->Rows[i]->Cells[j] ->Value = Convert::ToString( (Double) t(i,j));


}

static void Change_igrid(int n , int m ,MetroGrid ^Dt){
	int width = BIG_WIDTH ;
	int height = BIG_HEIGT ;
	try{
	 width = Dt->Columns[0]->Width ;
	 height = Dt->Rows[0]->Height ;
	}
	catch(...) {  }
				matrix<int> t(n,m,0) ;
				try{ t= get_imatrix_from_formt(Dt); }
				catch(...){}
				Dt->Columns->Clear();
				Dt->Rows->Clear();
				for(int i=0;i<m;i++) {
					Dt->Columns->Add("R",Convert::ToString(i));
					Dt->Columns[i]->Width = width ;

				}
				for(int i=0;i<n;i++) {

					Dt->Rows->Add();
					Dt->Rows[i]->Height = height ;
				}
			for(int i=0;i<n;i++)
					for(int j=0;j<m;j++) Dt->Rows[i]->Cells[j]->Value = "0";

				int min_rows = min(n,t.rows());
				int min_column = min(m,t.columns());

				for(int i=0;i<min_rows;i++)
					for(int j=0;j<min_column;j++)
						Dt->Rows[i]->Cells[j] ->Value = Convert::ToString( (Int32) t(i,j));


}


static	matrix<long double>  get_matrix_from_formt(MetroGrid^ MetroGridt ){
					int n = MetroGridt -> Rows -> Count ;
					int m = MetroGridt -> Columns -> Count ;
				    matrix <double long > t(n,m);
					 for(int i=0;i<n;i++)
						 for(int j=0;j<m;j++)
							 t(i,j) =  (double long)  Convert::ToDouble( MetroGridt -> Rows[i] -> Cells [j]->Value->ToString() );

					 return t;
 }

 static	matrix<int>  get_imatrix_from_formt(MetroGrid^ MetroGridt ){
					int n = MetroGridt -> Rows -> Count ;
					int m = MetroGridt -> Columns -> Count ;
				    matrix <int> t(n,m);
					 for(int i=0;i<n;i++)
						 for(int j=0;j<m;j++)
							 t(i,j) =  (int)  Convert::ToDouble( MetroGridt -> Rows[i] -> Cells [j]->Value->ToString() );

					 return t;
 }

	 static equations get_equation_from_data(MetroGrid ^ Dt1 , MetroGrid ^ Dt2){
							  int n=Dt1->Rows->Count ;
							  int m=Dt1->Columns->Count;
							  if(!n || !m) throw exception() ;
							  equations  t(n,m/2) ;

							  for(int i=0;i<n;i++)
								  for(int j=0;j<m;j+=2)
									  t.myeq(i,j/2) = Convert::ToDouble(Dt1->Rows[i]->Cells[j]->Value->ToString() ) ;


							  for(int i=0;i<n;i++) t.myeq(i,t.myeq.columns()-1)= Convert::ToDouble( Dt2->Rows[i]->Cells[0]->Value->ToString() )  ;



							  return t;
						}

		static void chage_equation(int n,int m ,MetroGrid ^ metroGrid1, MetroGrid ^metroGrid2 ){


				equations  eq (n,m);
			try{  eq=get_equation_from_data(metroGrid1,metroGrid2); }
			catch(...){}
				metroGrid2->Rows->Clear();
				for(int i=0;i<n;i++) metroGrid2->Rows->Add();
				metroGrid1->Columns->Clear();
				for(int i=0;i<m*2;i++)
			    metroGrid1->Columns->Add("R",Convert::ToString(i));
				for(int i=0;i<n;i++)  metroGrid1->Rows->Add() ;
				for(int i=0;i<n ; i++)
					 for(int j=0;j<m*2; j++)
						 {
							 if( !(j%2) )
							 {

								 metroGrid1->Rows[i]->Cells[j]->Value =  "0";
								  metroGrid1->Columns[j]->Width = 70 ;
							 }
							 else
								 {

									 metroGrid1->Rows[i]->Cells[j]->Value =  "X"+Convert::ToString(j/2 + 1) ;
									  metroGrid1->Columns[j]->Width = 20 ;
									 metroGrid1->Rows[i]->Cells[j]->ReadOnly = 1;
							     }

					   }
					  for(int i=0;i<n;i++) metroGrid2->Rows[i]->Cells[0]->Value = "0" ;

		    	  int min_n = min(n,eq.myeq.rows());
		    	int min_m = min(m,eq.myeq.columns()-1);

                for(int i=0;i<min_n ; i++)
					 for(int j=0;j<min_m*2; j+=2)
								 metroGrid1->Rows[i]->Cells[j]->Value =  Convert::ToString((Double) eq.myeq(i,j/2));



				for(int i=0;i<min_n;i++) metroGrid2->Rows[i]->Cells[0]->Value = Convert::ToString( (Double) eq.myeq(i,eq.myeq.columns()-1)) ;



	}

	static string String_to_string(String ^S){

				 string s="";
				 for(int i=0,n=S->Length;i<n;i++)
				   s+= (char) S[i];
				 return s;

			 }
			static String ^ string_To_String(string s){
	             String ^S;
				 for(int i=0;i<s.length();i++) S+=Convert::ToChar(s[i]);
				 return S;

		 }
		static void copy_grid(MetroGrid ^s , MetroGrid^ d){

			while (d->Rows->Count) d->Rows->Clear();
		    while (d->Columns->Count) d->Columns->Clear();
			int n = (int) s->Rows->Count ;
			int m = (int) s->Columns->Count ;
			for(int i=0;i<m;i++) {

				d->Columns->Add("R2",Convert::ToString(i));
				d->Columns[i]->Width = BIG_WIDTH ;
			}
			for(int i=0;i<n;i++) {
				d->Rows->Add();

				d->Rows[i]->Height = BIG_HEIGT ;
			}

			for(int i=0;i<n;i++)
				for(int j=0;j<m;j++) d->Rows[i]->Cells[j]->Value = s->Rows[i]->Cells[j]->Value->ToString();


		}
 static void copy_grid2(MetroGrid ^s , MetroGrid^ d){

			while (d->Rows->Count) d->Rows->Clear();
		    while (d->Columns->Count) d->Columns->Clear();
			int n = (int) s->Rows->Count ;
			int m = (int) s->Columns->Count ;
			for(int i=0;i<m;i++) {

				d->Columns->Add("R2",Convert::ToString(i));
				d->Columns[i]->Width = SMALL_WIDTH ;
			}
			for(int i=0;i<n;i++) {
				d->Rows->Add();
				d->Rows[i]->Height = SMALL_HEIGT ;
			}

			for(int i=0;i<n;i++)
				for(int j=0;j<m;j++) d->Rows[i]->Cells[j]->Value = s->Rows[i]->Cells[j]->Value->ToString();


		}
	grid(void);


	~grid(void);
};

