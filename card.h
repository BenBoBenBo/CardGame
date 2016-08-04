#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

public class Card
{
    public static final int SPADE   = 4;
    public static final int HEART   = 3;
    public static final int CLUB    = 2;
    public static final int DIAMOND = 1;

    private static final String[] Suit = { "*", "d", "c", "h", "s"};
    private static final String[] Rank = { "*", "*", "2", "3", "4",
            "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    private byte cardSuit;
    private byte cardRank;

    public Card( int suit, int rank )
    public int suit()
    public String suitStr()
    public int rank()
    public String rankStr()
    public String toString()
}

#endif // CARD_H_INCLUDED
