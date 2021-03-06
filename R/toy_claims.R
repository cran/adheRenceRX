#' @title  A Toy Patient Medication Claims \code{tibble}
#'
#' @description  This mock patient claims tibble is meant to test adheRenceRX with scenarios presented in Figure 1. of 
#' Canfield SL, Zuckerman A, Anguiano RH, Jolly JA, DeClercq J.
#' Navigating the wild west of medication adherence reporting in specialty pharmacy. J Manag Care Spec Pharm. 2019;25(10):1073-77
#'
#' @format A \code{tibble} with 22 rows and 3 variables:
#' \describe{
#'   \item{ID}{patient ID to be grouped by}
#'   \item{date}{date of claim}
#'   \item{days_supply}{number of days supplied}
#' }
"toy_claims"
