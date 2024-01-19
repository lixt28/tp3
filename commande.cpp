#include "commande.h"
#include <iostream>

// In commande.cpp
Commande::Commande(Client client, bool status /*= false*/)
    : _client(client), _PanierCommande(client.retrievePanierValider()), _status(status) {}


void Commande::ModifierStatus() {
    _status = true;
}

Client Commande::getClient() const {
    return _client;
}

std::ostream& operator<<(std::ostream& osCommande, Commande& commande) {
    std::string display = "La commande " + commande._client.getNom() + " " + commande._client.getPrenom() +
                          " Numero " + std::to_string(commande._client.getNumeroTelephone()) +
                          " est en quantité de " + /* Add appropriate code for product information */ ".";
    osCommande << display << std::endl;
    return osCommande;
}

