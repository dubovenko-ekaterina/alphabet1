#include <iostream>
#include <array>

using namespace std;

struct symbol
{
private:
    array<string, 6> graphics;
public:
    symbol(string i1, string i2, string i3, string i4, string i5, string i6)
    {
        graphics[0] = i1;
        graphics[1] = i2;
        graphics[2] = i3;
        graphics[3] = i4;
        graphics[4] = i5;
        graphics[5] = i6;
    }
    string getline(int i)
    {
        return graphics[i];
    }
};

struct screen
{
private:
    array<string, 6> graphics;
public:
    void add(symbol toadd)
    {
        for (int i(0); i<6; i++)
            graphics[i]+=toadd.getline(i);
    }
    void print()
    {
    for (auto i: graphics)
        cout << i << endl;
    }
};

screen mainscreen;

int main()
{
    symbol a(" _____  ", " ||   | ", " ||___| ", " ||   | ", " ||   | ", " ||   | ");
    symbol b(" _____  ", " ||   | ", " ||___| ", " ||   | ", " ||   | ", " ||___| ");
    symbol c("  ____ ", " ||    ", " ||    ", " ||    ", " ||    ", " ||___ ");
    symbol e(" _____ ", " ||    ", " ||___ ", " ||    ", " ||    ", " ||___ ");
    symbol f(" _____ ", " ||    ", " ||___ ", " ||    ", " ||    ", " ||    ");
    symbol g("  ____  ", " ||     ", " ||     ", " || __  ", " ||   | ", " ||___| ");
    symbol h(" __   _ ", " ||   | ", " ||   | ", " ||___| ", " ||   | ", " ||   | ");
    symbol i(" ____ ", "  ||  ", "  ||  ", "  ||  ", "  ||  ", " _||_ ");
    symbol j("   __ ", "   || ", "   || ", "   || ", "|  || ", "|__|| ");
    symbol k(" __  _  ", " || /   ", " ||/    ", " ||\\    ", " || \\   ", " ||  \\_ ");
    symbol m(" __    _ ", " ||\\  /| ", " || \\/ | ", " ||    | ", " ||    | ", " ||    | ");
    symbol o("  ____  ", " |    | ", " |    | ", " |    | ", " |    | ", " |____| ");
    symbol q("  ____    ", " |    |   ", " |    |   ", " |    |   ", " |    |   ", " |____|__ ");
    symbol s("  ____  ", " |      ", " |____  ", "      | ", "      | ", "  ____| ");
    mainscreen.add(a);
    mainscreen.add(b);
    mainscreen.add(c);
    mainscreen.add(e);
    mainscreen.add(f);
    mainscreen.add(g);
    mainscreen.add(h);
    mainscreen.add(i);
    mainscreen.add(j);
    mainscreen.add(k);
    mainscreen.add(m);
    mainscreen.add(o);
    mainscreen.add(q);
    mainscreen.add(s);
    mainscreen.print();
}

