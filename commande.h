#ifndef COMMANDE_H
#define COMMANDE_H
#include "client.h"
#include <vector>

class Commande {
public:
    Commande(Client client, bool status = false);

    void ModifierStatus();
    Client getClient() const;

    // Add a getter function for _PanierCommande
    std::vector<std::pair<int, int>> getPanierCommande() const {
        return _PanierCommande;
    }

    friend std::ostream& operator<<(std::ostream& osCommande, Commande& commande);

private:
    Client _client;
    std::vector<std::pair<int, int>> _PanierCommande;
    bool _status;
};

#endif // COMMANDE_H