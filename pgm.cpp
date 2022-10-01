int solve(string s, int k)
{
    int n = s.length();
    vector<int> pre(n + 1, 0);
    vector<int> suf(n + 1, 0);
    if (s[0] == '1')
    {
        pre[0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
        {
            pre[i] = pre[i - 1] + 1;
        }
        else
        {
            pre[i] = 0;
        }
    }
    if (s[n - 1] == '1')
    {
        suf[n - 1] = 1;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            suf[i] = suf[i + 1] + 1;
        }
        else
        {
            suf[i] = 0;
        }
    }
    int ans = 0, i = 0, idx = 0;
    if (k < n)
        ans = max(ans, k + suf[k]);

    for (i = k; i < n; i++)
    {
        ans = max(ans, k + pre[idx++] + suf[i + 1]);
    }
    cout << ans << endl;
    return ans;
}
