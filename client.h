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
    void getPanierAchat() const;
    void AjouterProduitPanierAchat(Produit& p,int quantite);
    void ViderPanier();
    void ModifierQuantiteProduit(Produit& p , int Quantite);
    void SupprimerElementPanier(int identifiantProduit);
    void ValiderPanier();
    void getPanierValider();
    friend std::ostream& operator<<(std::ostream& osClient, Client& client);
    std::vector<std::pair<int, int>> getPanierValider() const;
    void printPanierValider() const;
    std::vector<std::pair<int, int>> retrievePanierValider() const;
    


    private:
        std::string _nom;
        std::string _prenom;
        int _numeroTelephone;
        std::vector<std::pair<int,int>>_panierAchat;
        std::vector<std::vector<int>> board;
        std::vector<std::pair<int,int>> _panierValider;
        std::vector<std::pair<int, int>> _PanierCommande;

        
};

#endif