#ifndef MAGASIN_H
#define MAGASIN_H
#include <string>
#include <vector>
//#include "produit.h"
//#include "client.h"
//#include "commande.h"

class Produit;
class Client;
class Commande;

class Magasin {
    public:
        Magasin();
        Magasin(std::vector<Produit> _produits, std::vector<Client> _clients, std::vector<Commande> _commandes);
    
    private:
        std::vector<Produit> _produits;
        std::vector<Client> _clients;
        std::vector<Commande> _commandes;
};

#endif