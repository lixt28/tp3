#include "magasin.h"
#include <iostream>


Magasin::Magasin() {}

void Magasin::ajouterProduit(Produit& produits){
    _produits.push_back(produits);
}

void Magasin::ListerProduitsMagasin(){
    for(auto i=0 ; i<_produits.size() ; i++){
        std::cout<<"Produits "+i
        <<_produits[i]
        <<std::endl;
    }
}

void Magasin::RechercheNomProduit(std::string nomproduit){
    for(auto i=0 ; i<_produits.size() ; i++){
        if(_produits[i].getTitre() == nomproduit){
            std::cout<<" Le Produit "+ nomproduit +" est "
            <<_produits[i]
            <<std::endl;
        }
    }
}

void Magasin::ModifierQuantiteProduit(std::string nomproduit, int nouvelleQuantiteProduit){
    for(auto i=0 ; i<_produits.size() ; i++){
        if(_produits[i].getTitre() == nomproduit){
            _produits[i].modifier(nouvelleQuantiteProduit);
        }
    }
}

void Magasin::ajouterClient(Client& client){
    _clients.push_back(client);
}

void Magasin::ListerClientsMagasin(){
    for(auto i=0 ; i<_clients.size() ; i++){
        std::cout<<"Client "+i
        <<_clients[i]
        <<std::endl;
    }
}

void Magasin::RechercheClient(int numeroTelephoneclient){
    for(auto i=0 ; i<_clients.size() ; i++){
        if(_clients[i].getNumeroTelephone() ==  numeroTelephoneclient){
            std::cout<<" Le Client de numero de telephone "+ 
            std::to_string(numeroTelephoneclient)+" est"
            <<_clients[i]
            <<std::endl;
        }
    }
}

void Magasin::AjouterProduitClient(Client& client, Produit& produit,int quantitedeproduit){
    client.AjouterProduitPanierAchat(produit, quantitedeproduit);
}

void SupprimerProduitPanierAchatClient(Client& client, Produit& produit){
    client.SupprimerElementPanier(produit.getID());
}

void ModifierQuantiteProduitPanierAchatClient(Client& client, Produit& produit,int nouvellequantiteproduit){
    client.ModifierQuantiteProduit(produit,nouvellequantiteproduit);    
}

void Magasin::ValiderCommande(Commande& commande){
    std::cout<<"Commande valideée de "+ commande.getClient().getNom()+ " "+ commande.getClient().getPrenom()
    <<commande
    <<std::endl;
    _commandes.push_back(commande);
}
void Magasin::MiseAJourstatusCommande(Commande& commande){
    commande.ModifierStatus();
}

void Magasin::ListerCommandeMagasin(){
    for(auto i=0 ; i<_commandes.size() ; i++){
        std::cout<<"Commande "+i
        <<_commandes[i]
        <<std::endl;
    }
}

void Magasin::RechercheCommandeClient(Client client){
    for(auto i=0 ; i<_commandes.size() ; i++){
        if(_commandes[i].getClient().getNumeroTelephone() ==  client.getNumeroTelephone()){
            std::cout<<" Le Client de numero de telephone "+ 
            std::to_string(client.getNumeroTelephone())+" a pour Commande(s)"
            <<_commandes[i]
            <<std::endl;
        }
    }
}