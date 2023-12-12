#ifndef MAGASIN_H
#define MAGASIN_H
#include <string>
#include <vector>
#include "produit.h"
#include "client.h"
#include "commande.h"



class Magasin {
    public:
        Magasin();
        Magasin(std::vector<Produit> _produits, std::vector<Client> _clients, std::vector<Commande> _commandes);
        void ajouterProduit(Produit& produit);
        void ListerProduitsMagasin();
        void RechercheNomProduit(std::string nomproduit);
        void ModifierQuantiteProduit(std::string nomproduit, int nouvelleQuantiteProduit);
        void ajouterClient(Client& client);
        void ListerClientsMagasin();
        void RechercheClient(int numeroTelephoneclient);
        void AjouterProduitClient(Client& client, Produit& produit,int quantitedeproduit);
        void SupprimerProduitPanierAchatClient(Client& client, Produit& produit);
        void ModifierQuantiteProduitPanierAchatClient(Client& client, Produit& produit,int nouvellequantiteproduit);
        void ValiderCommande(Commande& commande);
        void MiseAJourstatusCommande(Commande& commande);
        void ListerCommandeMagasin();
        void RechercheCommandeClient(Client client);

    private:
        std::vector<Produit> _produits;
        std::vector<Client> _clients;
        std::vector<Commande> _commandes;
        
};

#endif 