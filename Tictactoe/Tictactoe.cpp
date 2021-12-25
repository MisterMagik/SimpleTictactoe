// Tictactoe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <Windows.h>

#define MAX_PLAYERS 2
void DrawBoard();
int Check();
void ClearBoard();
void SetX();
void SetO();
void SetVar();
bool Isrunning = true;
bool Player = 0;
char Pole[9] = { 'O', '1', '2', '3', '4', '5', '6', '7', '8' };
int WonPlayer;
int main()
{
    while (Isrunning != false)
    {
        if (Player == 0)
        {
           WonPlayer = Check();
            DrawBoard();
            SetX();
            ClearBoard();
            Player = 1;
        }
        else
        {
           WonPlayer = Check();
            DrawBoard();
            SetO();
            ClearBoard();
            Player = 0;
        }
          
    }
    
}
void SetVar()
{
    Pole[0] = 'O';
    Pole[1] = '1';
    Pole[2] = '2';
    Pole[3] = '3';
    Pole[4] = '4';
    Pole[5] = '5';
    Pole[6] = '6';
    Pole[7] = '7';
    Pole[8] = '8';
    WonPlayer = -1;
    std::cout << "Press any key.";
    ClearBoard();
}
void SetO()
{
    int Number;
    std::cin >> Number;
    if (Number < 0 || 9 < Number)
    {

    }
    else
    {
        Pole[Number] = '0';
    }
}
void SetX()
{
    int Number;
    std::cin >> Number;
    if (Number < 0 || 9 < Number)
    {

    }
    else
    {
        Pole[Number] = 'X';
    }
}
void ClearBoard()
{
    system("cls");
}
int Check()
{
    int Winner = -1;
    char Sign[3];
    if (Pole[0] == Pole[1] && Pole[1] == Pole[2])
    {
        Sign[0] = Pole[0];
        Sign[1] = Pole[1];
        Sign[2] = Pole[2];
    }
    else if (Pole[3] == Pole[4] && Pole[4] == Pole[5])
    {
        Sign[0] = Pole[3];
        Sign[1] = Pole[4];
        Sign[2] = Pole[5];

    }
    else if (Pole[6] == Pole[7] && Pole[7] == Pole[8])
    {
        Sign[0] = Pole[6];
        Sign[1] = Pole[7];
        Sign[2] = Pole[8];

    }
    else if (Pole[0] == Pole[3] && Pole[3] == Pole[6])
    {
        Sign[0] = Pole[0];
        Sign[1] = Pole[3];
        Sign[2] = Pole[6];
    }
    else if (Pole[1] == Pole[4] && Pole[4] == Pole[7])
    {
        Sign[0] = Pole[1];
        Sign[1] = Pole[4];
        Sign[2] = Pole[7];
    }
    else if (Pole[2] == Pole[5] && Pole[5] == Pole[8])
    {
        Sign[0] = Pole[2];
        Sign[1] = Pole[5];
        Sign[2] = Pole[8];
    }
    else if (Pole[0] == Pole[4] && Pole[4] == Pole[8])
    {
        Sign[0] = Pole[0];
        Sign[1] = Pole[4];
        Sign[2] = Pole[8];
    }
    else if (Pole[2] == Pole[4] && Pole[4] == Pole[6])
        {
        Sign[0] = Pole[2];
        Sign[1] = Pole[4];
        Sign[2] = Pole[6];
    }
    if (Sign[0] == 'X')
    {
        if (Sign[1] == 'X')
        {
            if (Sign[2] == 'X')
            {
                Winner = 1;
            }
        }
    }
    else if (Sign[0] == '0')
    {
        if (Sign[1] == '0')
        {
            if (Sign[2] == '0')
            {
                Winner = 0;
            }
        }
    }
    return Winner;
}
void DrawBoard()
{
    std::cout << Pole[0] << "|" << Pole[1] << "|" << Pole[2] << std::endl;
    std::cout << "-" << "|" << "-" << "|" << "-" << std::endl;
    std::cout << Pole[3] << "|" << Pole[4] << "|" << Pole[5] << std::endl;
    std::cout << "-" << "|" << "-" << "|" << "-" << std::endl;
    std::cout << Pole[6] << "|" << Pole[7] << "|" << Pole[8] << std::endl;
    if (WonPlayer == 0)
    {
        ClearBoard();
        std::cout << "Wygral gracz 0";
        SetVar();
    }
    else if (WonPlayer == 1)
    {
        ClearBoard();
        std::cout << "Wygral gracz X";
        SetVar();
    }
}
// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
