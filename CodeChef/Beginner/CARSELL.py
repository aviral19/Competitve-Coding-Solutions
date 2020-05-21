while True:
    try:
        cases = int(input())


        def profit(n, p, total_profit):
            if len(p) == 0:
                return total_profit
            total_profit += max(p)
            p.remove(max(p))
            for i in range(len(p)):
                if p[i] > 0:
                    p[i] -= 1

            return profit(n, p, total_profit)


        results = []

        for i in range(cases):
            total_profit = 0
            n = int(input())

            p = [int(x) for x in input().split()]
            netprofit = profit(n, p, total_profit)
            results.append(netprofit)

        for i in range(len(results)):
            print(results[i])

    except:
        break