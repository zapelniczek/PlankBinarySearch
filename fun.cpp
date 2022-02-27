#include "header.h"
#include <algorithm>

bool check (const std::vector<int> &A, const std::vector<int> &B, const std::vector<int> &C, int nails)
{
    std::vector<int> sorted_nails(nails, 0);
    std::copy(C.begin(), C.begin() + nails , sorted_nails.begin()); // invalid for vector.size() == 1
    std::sort(sorted_nails.begin(), sorted_nails.end());

    int nailed = 0;
    for(size_t i = 0; i < A.size(); ++i)
    {
        int nail = *std::lower_bound(sorted_nails.begin(), sorted_nails.end(), A[i]);
        if(A[i] <= nail && nail <= B[i])
            ++nailed;
        else
            break;
    }
    return nailed == A.size() ? true : false;
}

int solution(std::vector<int> &A, std::vector<int> &B, std::vector<int> &C)
{
    int start = 0, end = C.size(); 
    int result = -1;
    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(check(A, B, C, mid + 1))
        {
            end = mid - 1;
            result = mid + 1;
        }
        else
            start = mid + 1;
    }
    
    return result;
}