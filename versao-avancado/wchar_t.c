#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
int main(){
    setlocale(LC _ ALL,“”);
    wchar _ t caractere = L’\u00A9’;
    wchar _ t texto[30] = L“meu caractere longo = \u00F1”;
    wprintf(L“Marca registrada: \u00A9 ou \u00AE \n”);
    wprintf(L“Caractere: %lc \n”,caractere);
    wprintf(L“%ls \n”,texto);
    system(“pause”);
    return 0;
}