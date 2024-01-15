class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        winners, losers = {}, {}

        for match in matches:
            winner, loser = match[0], match[1]
            
            if winners.get(winner):
                winners[winner] += 1
            else:
                winners[winner] = 1
            
            if losers.get(loser):
                losers[loser] += 1
            else:
                losers[loser] = 1

        a, b = [], []

        for winner, count in winners.items():
            if not losers.get(winner):
                a.append(winner)
        
        for loser, count in losers.items():
            if count == 1:
                b.append(loser)
        
        return [sorted(a), sorted(b)]