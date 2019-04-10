/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 *
 * Created on 21 mars 2019, 23:00
 */

#include <cstdlib>
#include <iostream>

#include "Bloc.h"
#include "Composant2.h"

using namespace std;

/*
 * 
 */

vector <Bloc> getBlocs() { vector <Bloc> x; return testi::bloc;}
class test {
    
public :
   static  vector <Bloc> blocs;
    
    
};

int main(int argc, char** argv) {

    Wallet w1;
    Wallet w2;
    unsigned char x[64]= "11";
    unsigned char x2[64]= "22";

    pub_copy(x,w1.cle_public );
    pub_copy(x2,w2.cle_public );

    
    Bloc bb;
    UTXO t ;
    
    //init blocks
    t.montant=100;
    pub_copy(t.dest,w1.cle_public );
    bb.tx1.UTXOs.push_back(t);    
    cout <<"Montant A "<< w1.getMontant(w1.cle_public) <<endl;
    cout <<"Montant B "<<w1.getMontant(w1.cle_public) <<endl;
    
    UTXO** utxoss;
	
	
	std::vector<Bloc> blocs = getBlocs();

	utxoss = getAllUTXO(blocs);
    


   TX transaction;
   Bloc bloc2;
   transaction = w2.createTransaction(w1.cle_prive , w1.cle_public , w2.cle_public , 20);
   bloc2.tx1=transaction;
   int max=w1.getNbBlocMAx(getBlocs());
   bloc2.num=max; 

    cout <<"Nouveau Montant A "<< w1.getMontant(w1.cle_public) <<endl;
    cout <<"Nouveau Montant B "<<w1.getMontant(w1.cle_public) <<endl;
   
   
   
}

