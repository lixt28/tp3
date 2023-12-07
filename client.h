#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <vector>
#include "produit.h"

class Client {

    public:
    Client(std::string nom,std::string prenom,int numeroTelephone,std::vector<int> panierAchat);
    std::string getNom() const;
    std::string getPrenom() const;
    int getNumeroTelephone() const;
    //std::string getPanierClient();
    void display();
    void AjouterProduit(Produit& p);
    void ViderPanier();
    void ModifierQuantiteProduit(int identifiantProduit , int Quantite);
    void SupprimerElementPanier(int identifiantProduit);


    private:
        std::string _prenom;
        std::string _nom;
        int _numeroTelephone;
        std::vector<std::pair<int,int>>_panierAchat;
        std::vector<std::vector<int>> board;
        

};

#endif