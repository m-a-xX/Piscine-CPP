#include "mutantstack.hpp"

int main()
{
    std::cout << "Create a new MutantStack\n";
    MutantStack<int>    mstack;
    std::cout << "Push 5 to mstack\n";
    mstack.push(5);
    std::cout << "Push 17 to mstack\n";
    mstack.push(17);
    std::cout << "Top of mstack is : " << mstack.top() << std::endl;
    std::cout << "Pop mstack\n";
    mstack.pop();
    std::cout << "Top of mstack is : " << mstack.top() << std::endl;
    std::cout << "Size of mstack is : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mstack.push(34);
    mstack.push(5641);
    mstack.push(-516);
    mstack.push(213);
    std::cout << "Push 3, 5, 737, 0, 34, 5641, -516, 213 to mstack\n";
    std::cout << "Begin of mstack is : " << *mstack.begin() << std::endl;
    std::cout << "Top of mstack is : " << mstack.top() << std::endl;
    std::cout << "Size of mstack is : " << mstack.size() << std::endl;
    std::cout << "Pop mstack\n";
    mstack.pop();
    std::cout << "Top of mstack is : " << mstack.top() << std::endl;
    std::cout << "Size of mstack is : " << mstack.size() << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Stack contains : {";
    ++it;
    --it;
    while(it != ite)
    {
        std::cout << *it;
        if (++it != ite)
            std::cout << ", ";
    }
    std::cout << "}\n";
    std::stack<int> s(mstack);
    return 0;
}