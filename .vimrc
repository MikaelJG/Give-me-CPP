"colorscheme gruvbox
"hi Normal guibg=NONE ctermbg=NONE
set background=dark
set number relativenumber
set undodir=$HOME/.vim/undo     "directory where the undo files will be stored
set undofile                    "turn on the feature
set tabstop=4
set softtabstop=4
set scrolloff=8
set expandtab
set shiftwidth=4
set autoindent

nnoremap <C-u> <C-u>zz
nnoremap <C-d> <C-d>zz
nnoremap n nzz
nnoremap k kzz
nnoremap j jzz

nnoremap <leader>vb o<ESC>O\begin{verbatim}<CR><CR>\end{verbatim}<ESC>ki
nnoremap <leader>im o<ESC>O\begin{center}<CR><CR>\end{center}<ESC>ki\includegraphics[width=2in]{
nnoremap <leader>bf o<ESC>O\textbf{<ESC>a
nnoremap <leader>se o<ESC>O\section{<ESC>a
nnoremap <leader>su o<ESC>O\subsection{<ESC>a
nnoremap <leader>r :%s/

command! -nargs=0 Line :put =repeat('-', 100)
command! -nargs=0 Clean :%s/\s\+$//g "Clean the end of all lines with spaces.
set noerrorbells visualbell t_vb=
