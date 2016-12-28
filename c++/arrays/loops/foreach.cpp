#include <iostream>

int main()
{
  // const int numNames = 8;
  // the below was wrong
  // std::string names[8] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
  // it needed to be a const and did not need to have the index defined
  const std::string names[] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

  // ask the user to enter a name
  std::cout << "Please enter a name: ";
  std::string foundName;
  std::cin >> foundName;

  // did not have a boolean here and had to add it for a check if the name is found
  bool found(false);
  // my reference needs to be a const
  for (const auto &name : names)
  {
    // first check to see if name equal to foundName
    if (name == foundName)
    {
      found = true;
      break;
    }
  }
  // this is outside of the for loop because it would print the name found for each index in the array
  if (found)
  {
    std::cout << foundName << " was found\n";
  }
  else
  {
    std::cout << foundName << " was not found\n";
  }
  return 0;
}
