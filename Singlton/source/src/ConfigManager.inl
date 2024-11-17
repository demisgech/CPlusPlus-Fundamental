#include "ConfigManager.hpp"

template <typename T, typename U>
ConfigManager<T, U>::ConfigManager() {}

template <typename T, typename U>
void ConfigManager<T, U>::set(const T& key, const T& value) {
  this->settings[key] = value;
}

template <typename T, typename U>
T ConfigManager<T, U>::get(const T& key) {
  return settings[key];
}

template <typename T, typename U>
shared_ptr<ConfigManager<T, U>> ConfigManager<T, U>::getInstance() {
  return instance;
}

template <typename T, typename U>
shared_ptr<ConfigManager<T, U>> ConfigManager<T, U>::instance =
    shared_ptr<ConfigManager>(new ConfigManager<T, U>());
