#include "commande.h"

Commande::Commande(Client client, bool status=false){
    _client = client;
    _PanierCommande.push_back(client.getPanierValider());
    _status=status;
};

std::ostream& operator<<(std::ostream& osCommande, Commande& commande){
    std::string display = "La commande " + _client.getNom() + _client.getPrenom() +
     " Numero" + _client.getNumeroTelephone() +  std::to_string(produit.getID()) + "est en quantité de " + produit.getDescription() + ".";
    osCommande << display << std::endl;
    return osCommande;
}

void Commande::ModifierStatus(){
    _status=true;
}

Client Commande::getClient() const{
    return _client;
}

