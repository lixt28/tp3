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

void Client::display(){
    board.assign(_panierAchat.size(), std::vector<int>(_panierAchat.size(), 0));
    for (int i = 0; i < _panierAchat.size(); ++i) {
        for (int j = 0; j < _panierAchat.size(); ++j) {
            std::cout << board[i][j] << "\t";
        }
        std::cout << std::endl;
    }


}

void Client::AjouterProduit(Produit& p){
  std::pair<int,int>CoupleElementProduit;
   CoupleElementProduit.first=p.getID();
   CoupleElementProduit.second=p.getQuantite(); 
   _panierAchat.push_back(CoupleElementProduit);
}

void Client::ViderPanier(){
    for(auto i=0; i<_panierAchat.size();i++){
        _panierAchat.pop_back();
    }
}

 /*for(int i=0 ; i<_panierAchat.size() ; i++)
{
  std::cout << _panierAchat[i].first << "\t" << _panierAchat[i].second << std::endl;
}*/

void Client::ModifierQuantiteProduit(int iProduit, int quantite){
   for(int i=0 ; i<_panierAchat.size() ; i++)
    {
        if(_panierAchat[i].first==iProduit){
            _panierAchat[i].second=quantite;
        }
    }  
}

// void Client::SupprimerElementPanier(int idproduit){
//     for(int i=0 ; i<_panierAchat.size() ; i++)
//     {
//         if(_panierAchat[i].first==idproduit){
//             //std::remove(_panierAchat[i]);
//            // _panierAchat[i].swap(_panierAchat.end());
           

//         }
//     }  
// }
void Client::SupprimerElementPanier(int idproduit) {
    for (auto it = _panierAchat.begin(); it != _panierAchat.end(); ++it) {
        if (it->first == idproduit) {
            _panierAchat.erase(it);
            break; // Arrêter la boucle après la suppression
        }
    }
}
