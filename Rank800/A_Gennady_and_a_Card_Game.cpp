#include <iostream>
#include <string>
using namespace std;

int main() {
    string table_card;
    cin >> table_card;
    
    string hand_cards[5];
    for (int i = 0; i < 5; ++i) {
        cin >> hand_cards[i];
    }
    
    char table_rank = table_card[0];
    char table_suit = table_card[1];
    
    for (int i = 0; i < 5; ++i) {
        char hand_rank = hand_cards[i][0];
        char hand_suit = hand_cards[i][1];
        
        if (hand_rank == table_rank || hand_suit == table_suit) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    
    return 0;
}
