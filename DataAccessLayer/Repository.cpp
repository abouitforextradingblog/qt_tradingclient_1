/* 
 * File:   Repository.cpp
 * Author: Piotr Gregor  postmaster@cf16.eu
 * 
 * Created on August 6, 2013, 11:55 PM
 */

#include <math.h>

#include "Repository.h"

Repository::Repository(const std::vector<IBAdditions::ContractEvent>& contractEventVector) {
    BOOST_FOREACH(const IBAdditions::ContractEvent ce, contractEventDataMap){
        //EventDataMap edm = std::pair<IBAdditions::Event, std::vector<double> >(ce.second, std::vector<double>())
        //contractEventDataMap_.insert(std::pair<IB::Contract, EventDataMap>(ce.first, ));
    }
}

Repository::Repository(){
}

Repository::Repository(const Repository& orig) {
}

Repository::~Repository() {
}

