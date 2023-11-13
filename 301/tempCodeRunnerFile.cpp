    ll ans = dp[e_num][goal] + mini;
    if(ans != 0 && N >= ans) cout << ans <<endl;
    else cout << -1 << endl;