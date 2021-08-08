if empty(glob('~/.vim/autoload/plug.vim'))
    silent !curl -fLo ~/.vim/autoload/plug.vim --create-dirs
        \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
    autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
endif

call plug#begin('~/.vim/plugged')

"vim-airline plugin
Plug 'vim-airline/vim-airline'

call plug#end()

" syntax highlighting
syntax on

" set syntax highlight colorscheme
"colorscheme peachpuff

"Status bar
set laststatus=2

"Show line numbers
set number

"Show relative line numbers
set relativenumber

"Set autoindent
set autoindent

"Highlight current line
set cursorline

"incremental search meaning the search term will be highlighted
set incsearch

"set tab length to 4
set tabstop=4

"replace tabs with white space
"set expandtab

"set vim to delete a tab(4 spaces) with a single backspace
"set softtabstop=4

"from /etc/vim/vimrc
set background=dark 
set showcmd     " Show (partial) command in status line.
set showmatch       " Show matching brackets.
set ignorecase      " Do case insensitive matching
set smartcase      " Do smart case matching
set incsearch       " Incremental search
set autowrite      " Automatically save before commands like :next and :make
set hidden     " Hide buffers when they are abandoned
set mouse=a        " Enable mouse usage (all modes)

let g:airline_powerline_fonts=1
