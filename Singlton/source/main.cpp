#include <iostream>

#include "ConfigManager.hpp"
using namespace std;

int main() {
  auto manager = ConfigManager<string, string>::getInstance();
  manager->set("Name", "Demis");

  auto name = manager->get("Name");
  cout << name << endl;

  shared_ptr<ConfigManager<string, string>> otherManager =
      ConfigManager<string, string>::getInstance();
  auto value = otherManager->get("Name");
  cout << name << endl;

  return 0;
}