#ifndef CONFIGMANAGER__HPP
#define CONFIGMANAGER__HPP

#include <map>
#include <memory>

using namespace std;

template <typename T, typename U>
class ConfigManager {
 private:
  static shared_ptr<ConfigManager<T, U>> instance;
  map<T, U> settings;
  ConfigManager();

 public:
  ConfigManager(const ConfigManager<T, U>& source) = delete;
  ConfigManager& operator=(const ConfigManager<T, U>& other) = delete;

  void set(const T& key, const T& value);
  T get(const T& key);
  static shared_ptr<ConfigManager<T, U>> getInstance();
};

#include "../src/ConfigManager.inl"
#endif  // CONFIGMANAGER__HPP