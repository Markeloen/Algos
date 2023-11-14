#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <string>
#include <cmath>





 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
      
      
  };

  


int lenn(int n) {
    int len{};
    while(n) {
        len++;
        n /= 10;
    }
    return len;
}

void create_reverse_llinked_list(int a) {
    std::cout << a << std::endl;
    int reversed_number{};
    int tmp{a}, cntr{};
    
    int length{lenn(a)};

    while(length) {
        reversed_number += tmp%10 * pow(10, --length);
        tmp /= 10;
        std::cout << reversed_number << std::endl;
    }
    std::cout << reversed_number;
}




int Reverse_number_fromNodes(ListNode* l) {
        ListNode* tmp{l};
        int Reverse_number{0}, counter{0};

        while(tmp) {
            Reverse_number += tmp->val * pow(10, counter++);
            tmp = tmp->next;
            

        }
        return Reverse_number;
    }

int reverse(int a, int b, int c) {
    return 0;
}

void Show_linked_list(ListNode* l) {
    ListNode* tmp{l};
        int Reverse_number{}, counter{};

        while(tmp) {
            std::cout << tmp->val;
            tmp = tmp->next;

        }
        
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tmp1{l1};
        ListNode* tmp2{l2};
        int l1_val{Reverse_number_fromNodes(l1)};
        int l2_val{Reverse_number_fromNodes(l2)};
        int sum{l1_val+l2_val};
        std::cout << "here is the print:" << sum << std::endl;

        int size{lenn(sum)};

        ListNode* final{};
        int tmp_num{};
        int num_to_add{};

        while(size--) {
            final->next = new ListNode(tmp_num%10);
            tmp_num /= 10;
        }

        return final;

        int itr{};
        // while (tmp1->next)
        // {
        //     /* code */
        // }
        
    }


    
};



int main()
{
    create_reverse_llinked_list(254);
    ListNode a{3};
    ListNode b{4, &a};
    ListNode c{5, &b};


    ListNode aa{6};
    ListNode bb{7, &aa};
    ListNode cc{8, &bb};

    Solution ff;
    Show_linked_list(ff.addTwoNumbers(&c, &cc));
    // Show_linked_list(&c);
    // std::cout << std::endl << Reverse_number_Nodes(&c) << std::endl;

    create_reverse_llinked_list(254);

}

