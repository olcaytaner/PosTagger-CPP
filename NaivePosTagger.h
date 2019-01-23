//
// Created by olcay on 22/01/2019.
//

#ifndef POSTAGGER_NAIVEPOSTAGGER_H
#define POSTAGGER_NAIVEPOSTAGGER_H

#include <map>
#include "PosTaggedCorpus.h"
#include "PosTagger.h"

using namespace std;

class NaivePosTagger : public PosTagger {
private:
    map<string, string> maxMap;
public:
    void train(PosTaggedCorpus corpus);
    Sentence posTag(Sentence sentence);
};


#endif //POSTAGGER_NAIVEPOSTAGGER_H
