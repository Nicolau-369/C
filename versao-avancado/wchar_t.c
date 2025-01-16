#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
int main(){
    setlocale(LC _ ALL,"");
    wchar _ t character = L'\u00A9';
    wchar _ t text[30] = L"my long character = \u00F1";
    wprintf(L"Marca registrada: \u00A9 or \u00AE \n");
    wprintf(L"Character: %lc \n",caractere);
    wprintf(L"%ls \n",text);
    system("pause");
    return 0;
}
