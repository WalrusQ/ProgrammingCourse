void check_string(char* string, char* sentence, char* word){

    int i, k;
    int sentence_index[10];
    int word_index[255];
    int max_sentence_index = 0;
    int max_word_index = 0;
    for (i=0, k = 0; i<255; i++, k++){
        if(string[i] == '.')
            sentence_index[k] = i;
    }
    for(i = k; i>=0; i--)
       if((sentence_index[i] - sentence_index[i-1]) > max_sentence_index)
        max_sentence_index = sentence_index[i+1] - sentence_index[i];

        if(sentence_index[0] > max_sentence_index)
            max_sentence_index = sentence_index[0];
        for(i = sentence_index[max_sentence_index-1]+1, k=0; i<max_sentence_index; i++, k++)
            sentence[k] = string[i];



//        for (i=0, k = 0; i<255; i++, k++){
//            if(string[i] == ' ')
//                word_index[k] = i;
//        }
//        for(i = k; i>=0; i--)
//           if((word_index[i] - word_index[i-1]) > max_word_index)
//            max_word_index = word_index[i+1] - word_index[i];

//            if(word_index[0] > max_word_index)
//                max_word_index = word_index[0];
//            for(i = word_index[max_word_index-1]+1, k=0; i<max_word_index; i++, k++)
//                word[k] = string[i];
}
