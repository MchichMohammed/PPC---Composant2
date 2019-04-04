/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Composant2.h
 *
 * Created on 18 mars 2019, 17:40
 */

#ifndef COMPOSANT2_H
#define COMPOSANT2_H

#include <vector>
#include "Bloc.h"
using namespace std;

class Wallet {
public:
    unsigned  char cle_public[KEY_SIZE];
    unsigned char cle_prive[KEY_SIZE];
    
public:
    int getNbBlocMAx(vector<Bloc> b);
    vector <UTXO> getAllUTXO(Bloc b) ;
    vector <TXI>  getAllTXI(Bloc b);
    vector<Bloc> updateBlocs();
    vector<TXI> compare();
    
    float getMontant(unsigned char publicKey[]);
    TX createTransaction(unsigned char E_PrKey[], unsigned char E_PbKey[], unsigned char D_PbKey[], float montant);
    
    
    
    //    vector<Bloc> blocs;
    
    //    Wallet();
    
};

void pub_copy(unsigned char txt[],unsigned char D_PbKey[]);
void stringToUnsignedChar64(string s, unsigned char*& uc);

#endif
