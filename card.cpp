#include "precomp.h"
#include "card.h"

class Card
{
    public:
        int SPADE   = 4;
        int HEART   = 3;
        int CLUB    = 2;
        int DIAMOND = 1;

    private:
        char Suit[] = { "*", "d", "c", "h", "s"};
        char Rank[] = { "*", "*", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
        char cardSuit;
        char cardRank;

    void Card( int suit, int rank )
    {
    if ( rank == 1 )
        cardRank = 14;     // Give Ace the rank 14
    else
        cardRank = (byte) rank;

        cardSuit = (byte) suit;
    }

    int suit()
    {
        return ( cardSuit );         // This is a shorthand for:
                                    //   this.cardSuit
    }

    char[] suitStr()
    {
        return( Suit[ cardSuit ] );  // This is a shorthand for:
                                    //   this.Suit[ this.cardSuit ]
    }

    int rank()
    {
        return ( cardRank );
    }

    char[] rankStr()
    {
        return ( Rank[ cardRank ] );
    }


    char[] toString()
    {
        return ( Rank[ cardRank ] + Suit[ cardSuit ] );
    }
}
