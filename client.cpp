#include "client.h"
#include <iostream>
#include "produit.h"

Client::Client(std::string nom,std::string prenom,int numeroTelephone,std::vector<int> panierAchat)
:_nom(nom),_prenom(prenom),_numeroTelephone(numeroTelephone){}

std::string Client::getNom() const{
    return _nom;
}

std::string Client::getPrenom() const{
    return _prenom;
}

int Client::getNumeroTelephone() const{
    return _numeroTelephone;
}

void Client::getPanierAchat() const {
    for (const auto& item : _panierAchat) {
        std::cout << "Produit ID: " << item.first
                  << "\tQuantité: " << item.second
                  << std::endl;
    }
}


void Client::AjouterProduitPanierAchat(Produit& p,int quantite){
  std::pair<int,int>CoupleElementProduit;
   CoupleElementProduit.first=p.getID();
   CoupleElementProduit.second=quantite; 
   _panierAchat.push_back(CoupleElementProduit);
}

void Client::ViderPanier() {
    for (size_t i = 0; i < _panierAchat.size(); i++) {
        _panierAchat.pop_back();
    }
}

void Client::ModifierQuantiteProduit(Produit& p, int quantite) {
    for (size_t i = 0; i < _panierAchat.size(); i++) {
        if (_panierAchat[i].first == p.getID()) {
            _panierAchat[i].second = quantite;
        }
    }
}

void Client::SupprimerElementPanier(int idproduit) {
    for (auto it = _panierAchat.begin(); it != _panierAchat.end(); ++it) {
        if (it->first == idproduit) {
            _panierAchat.erase(it);
            break; // Arrêter la boucle après la suppression
        }
    }
}

void Client::ValiderPanier() {
    std::string reponse;

    for (const auto& item : _panierAchat) {
        std::cout << "Produit ID: " << item.first
                  << "\tQuantité: " << item.second
                  << "\tvoulez-vous commander le produit ? O/N: ";

        std::cin >> reponse;

        if (reponse == "O") {
            _panierValider.push_back(item);
        }
    }
}


// void Client::getPanierValider() {
//     for (int i = 0; i < _panierValider.size(); ++i) {
//         std::cout << "Produit ID: " << _panierValider[i].first
//                   << "\tQuantité: " << _panierValider[i].second
//                   << std::endl;
//     }
// }

// In client.cpp
void Client::printPanierValider() const {
    for (size_t i = 0; i < _panierValider.size(); ++i) {
        std::cout << "Produit ID: " << _panierValider[i].first
                  << "\tQuantité: " << _panierValider[i].second
                  << std::endl;
    }
}

std::vector<std::pair<int, int>> Client::getPanierValider() const {
    return _panierValider;
}

std::vector<std::pair<int, int>> Client::retrievePanierValider() const {
    return _panierValider;
}






std::ostream& operator<<(std::ostream& osClient, Client& client) {
    std::string display = "Le client " + client.getNom() + " " + client.getPrenom() +
                          " avec pour numero de telephone " + std::to_string(client.getNumeroTelephone()) + ".";
    osClient << display << std::endl;
    return osClient;
}