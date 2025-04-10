vector<int> rearrangeArray(vector<int>& a) {
    vector<int> pos, neg;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] > 0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }

    vector<int> b(a.size());
    if (pos.size() > neg.size()) {
        for (int i = 0; i < neg.size(); i++) {
            b[2 * i] = pos[i];
            b[2 * i + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++) {
            b[index++] = pos[i];
        }
    } else {
        for (int i = 0; i < pos.size(); i++) {
            b[2 * i] = pos[i];
            b[2 * i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++) {
            b[index++] = neg[i];
        }
    }

    return b;
}
