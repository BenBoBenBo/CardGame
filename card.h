#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

class Card
{
    public:
        int SPADE   = 4;
        int HEART   = 3;
        int CLUB    = 2;
        int DIAMOND = 1;

        void Card( int suit, int rank )
        int suit()
        char[] suitStr()
        int rank()
        char[] rankStr()
        char[] toString()

    private:
        char Suit[] { "*", "d", "c", "h", "s"};
        char rank[] = { "*", "*", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
        char cardSuit;
        char cardRank;

}

#endif // CARD_H_INCLUDED
