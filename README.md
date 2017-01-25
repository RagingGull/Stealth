# Stealth

####Useful git commands:
command | description
--------|--------
git status | show sync status
git fetch | sync remote with local without modifying local
git fetch origin name | that^ but only sync branch "name"
git merge | merge fetched remote branches with your local repo
git pull | shorthand for git fetch; git merge
git branch | list local branches
git ls-remote or git branch -r | list remote branches
git branch name | create a new local branch called "name"
git checkout name | switch to existing branch "name"
git checkout -b name | create and switch to new branch "name". combines the 2 above
git push --set-upstream origin name | push a local branch to remote
git branch -d name | remove a local branch called "name" if it's merged (-D instead to force)
git push origin --delete name | remove a remote branch called "name"
git merge name | merge branch "name" to the current branch

https://www.atlassian.com/git/tutorials/syncing
