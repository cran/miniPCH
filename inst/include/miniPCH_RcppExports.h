// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_miniPCH_RCPPEXPORTS_H_GEN_
#define RCPP_miniPCH_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace miniPCH {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("miniPCH", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("miniPCH", "_miniPCH_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in miniPCH");
            }
        }
    }

    inline NumericVector hazFunCpp(const NumericVector& Tint, const NumericVector& lambda, const NumericVector& v) {
        typedef SEXP(*Ptr_hazFunCpp)(SEXP,SEXP,SEXP);
        static Ptr_hazFunCpp p_hazFunCpp = NULL;
        if (p_hazFunCpp == NULL) {
            validateSignature("NumericVector(*hazFunCpp)(const NumericVector&,const NumericVector&,const NumericVector&)");
            p_hazFunCpp = (Ptr_hazFunCpp)R_GetCCallable("miniPCH", "_miniPCH_hazFunCpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_hazFunCpp(Shield<SEXP>(Rcpp::wrap(Tint)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(v)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector cumhazFunCpp(const NumericVector& Tint, const NumericVector& lambda, const NumericVector& v) {
        typedef SEXP(*Ptr_cumhazFunCpp)(SEXP,SEXP,SEXP);
        static Ptr_cumhazFunCpp p_cumhazFunCpp = NULL;
        if (p_cumhazFunCpp == NULL) {
            validateSignature("NumericVector(*cumhazFunCpp)(const NumericVector&,const NumericVector&,const NumericVector&)");
            p_cumhazFunCpp = (Ptr_cumhazFunCpp)R_GetCCallable("miniPCH", "_miniPCH_cumhazFunCpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cumhazFunCpp(Shield<SEXP>(Rcpp::wrap(Tint)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(v)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector cdfFunCpp(const NumericVector& Tint, const NumericVector& lambda, const NumericVector& v) {
        typedef SEXP(*Ptr_cdfFunCpp)(SEXP,SEXP,SEXP);
        static Ptr_cdfFunCpp p_cdfFunCpp = NULL;
        if (p_cdfFunCpp == NULL) {
            validateSignature("NumericVector(*cdfFunCpp)(const NumericVector&,const NumericVector&,const NumericVector&)");
            p_cdfFunCpp = (Ptr_cdfFunCpp)R_GetCCallable("miniPCH", "_miniPCH_cdfFunCpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cdfFunCpp(Shield<SEXP>(Rcpp::wrap(Tint)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(v)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector pdfFunCpp(const NumericVector& Tint, const NumericVector& lambda, const NumericVector& v) {
        typedef SEXP(*Ptr_pdfFunCpp)(SEXP,SEXP,SEXP);
        static Ptr_pdfFunCpp p_pdfFunCpp = NULL;
        if (p_pdfFunCpp == NULL) {
            validateSignature("NumericVector(*pdfFunCpp)(const NumericVector&,const NumericVector&,const NumericVector&)");
            p_pdfFunCpp = (Ptr_pdfFunCpp)R_GetCCallable("miniPCH", "_miniPCH_pdfFunCpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pdfFunCpp(Shield<SEXP>(Rcpp::wrap(Tint)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(v)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector survFunCpp(const NumericVector& Tint, const NumericVector& lambda, const NumericVector& v) {
        typedef SEXP(*Ptr_survFunCpp)(SEXP,SEXP,SEXP);
        static Ptr_survFunCpp p_survFunCpp = NULL;
        if (p_survFunCpp == NULL) {
            validateSignature("NumericVector(*survFunCpp)(const NumericVector&,const NumericVector&,const NumericVector&)");
            p_survFunCpp = (Ptr_survFunCpp)R_GetCCallable("miniPCH", "_miniPCH_survFunCpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_survFunCpp(Shield<SEXP>(Rcpp::wrap(Tint)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(v)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

    inline NumericVector quantFunCpp(const NumericVector& Tint, const NumericVector& lambda, const NumericVector& v) {
        typedef SEXP(*Ptr_quantFunCpp)(SEXP,SEXP,SEXP);
        static Ptr_quantFunCpp p_quantFunCpp = NULL;
        if (p_quantFunCpp == NULL) {
            validateSignature("NumericVector(*quantFunCpp)(const NumericVector&,const NumericVector&,const NumericVector&)");
            p_quantFunCpp = (Ptr_quantFunCpp)R_GetCCallable("miniPCH", "_miniPCH_quantFunCpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_quantFunCpp(Shield<SEXP>(Rcpp::wrap(Tint)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(v)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<NumericVector >(rcpp_result_gen);
    }

}

#endif // RCPP_miniPCH_RCPPEXPORTS_H_GEN_
