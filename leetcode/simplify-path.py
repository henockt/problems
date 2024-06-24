class Solution:
    def simplifyPath(self, path: str) -> str:
        path.replace("//", "/")
        lst = path.split("/")
        st = deque()
        for curr in lst:
            if curr == ".." and st:
                st.pop()
            elif curr not in ["", ".", ".."]:
                st.append(curr)

        return "/" + "/".join(st)