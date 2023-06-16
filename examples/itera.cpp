
void print_map(const std::map<int, std::string> &map,
               const std::string &key_desc = "key",
               const std::string &value_desc = "value")
{
    for (std::map<int, std::string>::const_iterator data_itr = map.begin(); // this right here
         data_itr != map.end();
         ++data_itr)
    {
        std::cout << key_desc << ": '" << data_itr->first << "' "
                  << value_desc << ": '" << data_itr->second << "'\n";
    }
}

