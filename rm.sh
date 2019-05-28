#!/bin/bash
lias rm=trash
alias r=trash
alias rl='ls ~/.trash/'
alias ur=recoverfile

recoverfile()
{
    mv -i ~/.trash/$@ ./
}

trash()
{
    mv $@ ~/.trash
}
