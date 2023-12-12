#include "produit.h"
#include <iostream>

Produit::Produit(std::string titre, std::string description, 
int quantite, int prixUnitaire, int id):_titre(titre), 
_description(description), _quantite(quantite), _prixUnitaire(prixUnitaire), _id(id){}

std::string Produit::getTitre() const{
    return _titre;
}

std::string Produit::getDescription() const{
    return _description;
}

int Produit::getQuantite() const{
    return _quantite;
}

int Produit::getPrixUnitaire() const{
    return _prixUnitaire;
}

int Produit::getID() const{
    return _id;
}

void Produit::modifier(int nouvelleQuantite){
    _quantite = nouvelleQuantite;
}

std::ostream& operator<<(std::ostream& osProduit, Produit& produit){
    std::string display = "Le produit " + produit.getTitre() 
    + " Numero" + std::to_string(produit.getID()) + "est en quantité de " + produit.getDescription() + ".";
    osProduit << display << std::endl;
    return osProduit;
}