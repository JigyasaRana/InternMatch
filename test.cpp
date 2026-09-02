#include <iostream>
#include <curl/curl.h>

int main() {
    CURL *curl = curl_easy_init();
    if(curl) {
        std::cout << "libcurl working!" << std::endl;
        curl_easy_cleanup(curl);
    }
    return 0;
}