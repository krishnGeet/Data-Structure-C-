#include <iostream>
#include <vector>
using namespace std;
// THIS SOLUTION IS THE WORST I SAW IN THIS WHOLE WORLD(GHATIA TO NHI HAI LAKIN AGR QUESTION ME DIA HUA HAI KI ARRAY SORTED HAI TO USS CASE ME SABSE GAHTIYA SOLUTION HAI ITNA GHATIYA HAI KI HM AAPNA AANKH FOOR SKTA HAI, BHAGWAAN BACHAYE MUJHE ISS SOLUTION SA, SO SORRY TO THS SOLUTON HARR KUTTE KA DIN AATA HIA AAJ NHI HAI TO KYA HUA HIMMAT MT HAARNA PAKKA EK DIN TMHARA V TIME AAUYEGA OR JAB AAYEGA TO DUNIYA TAALI BAJAYEGA)
vector<int> intersectionArr(int a[], int b[], int n, int m)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (a[i] < b[j])
                break;

            if (a[i] == b[j])
            {
                ans.push_back(a[i]);
                b[j] = -1012;
                break;
            }
        }
    }
    return ans;
}
// AB DEKHTA HAI OPTIMIZED SOLUTION, WSA YA SOLUTIO WORK KAREGA JAB ARRAY SORTED HOOTA HAI TO
vector<int> interArray(int a[], int b[], int n, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            ans.push_back(a[i]);
            j++;
            i++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    int b[] = {5, 6, 7, 9, 10};

    vector<int> ans = interArray(a, b, 10, 5);
    for (int ele : ans)
    {
        cout << ele << " ";
    }
}