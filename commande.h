#ifndef COMMANDE_H
#define COMMANDE_H
#include "produit.h"
#include "client.h"
#include <string>
#include <vector>

class Commande{
    private:
    Client _client;
    Produit _produit;
    bool _status;
    std::vector<int> _PanierCommande ;

    public:
    friend  std::ostream& operator << (std::ostream& osCommande, Commande& commande);
    Commande(Client client,bool status);
    void ModifierStatus();
    Client getClient() const;

};

#endif